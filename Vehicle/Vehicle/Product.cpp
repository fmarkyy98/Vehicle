#include "Product.h"

bool Product::operator == (Product& p)
{
	bool result = this->adress == p.adress;
	return result;
}