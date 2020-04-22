#include <vector>
#include "Product.h"
#include "Driver.h"

Driver::Driver() : van() { }
void Driver::do()
{
	int c = 0;
	while (c < this->van->Capacity())
	{
		this->van->cargo.push_back(this->take());
	}
}
Product Driver::take()
{
	return Product();
}
void Driver::deliver(Product p)
{
	int dist = distance(this->van*, p.adress);
	if (!this->van->checkFuel(dist))
	{
		this->van->refuel(dist);
	}
	this->van->drive(dist);
	this->van->cargo.erase(this->van->cargo.begin() + std::distance(this->van->cargo.begin(), std::find(this->van->cargo.begin(), this->van->cargo.end(), p)));
}