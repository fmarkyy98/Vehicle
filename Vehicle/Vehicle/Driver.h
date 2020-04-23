#pragma once
#include "Vehicle.h"
#include "Product.h"

class Driver
{
public:
	Vehicle* van;

	Driver();
	void doo();
	Product take();
	void deliver(Product p);
};

