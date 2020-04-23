#include <vector>
#include <string>
#include <algorithm>
#include "Product.h"
#include "Driver.h"

Driver::Driver() : van() { }
void Driver::doo()
{
	int c = 0;
	while (c < this->van->Capacity)
	{
		this->van->cargo.push_back(this->take());
	}
	for (Product p : this->van->cargo)
	{
		deliver(p);
	}
}
Product Driver::take()
{
	return Product();
}
int distance(Vehicle& v, std::string s)
{
	return 100;
}
int indexOf(Product p, std::vector<Product> v)
{ 
	int result = -1;
	int i = 0;
	while (result == -1 && i < v.size())
	{
		if (v[i] == p)
		{
			result = i;
		}
		++i;
	}
	return result;
}
void Driver::deliver(Product p)
{
	int dist = distance(*this->van, p.adress);
	if (!this->van->checkFuel(dist))
	{
		this->van->refuel(/*dist*/);
	}
	this->van->drive(dist);
	this->van->cargo[indexOf(p, this->van->cargo)] = this->van->cargo[this->van->cargo.size() - 1];
	this->van->cargo.pop_back();
}