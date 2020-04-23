#pragma once
#include <string>

class Product
{
public:
	std::string adress;

	bool operator == (Product& p);
};

