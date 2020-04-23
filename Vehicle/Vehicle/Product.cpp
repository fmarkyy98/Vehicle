#include "Product.h"

bool operator == (const Product& lhs, const Product& rhs)
{
	bool result = lhs.adress == rhs.adress;
	return result;
}