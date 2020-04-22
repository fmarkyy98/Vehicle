#pragma once
#include <vector>
#include "Engine.h"
#include "FuelTank.h"
#include "Product.h"

enum Color
{
	Blue,
	Yellow
};

class Vehicle
{
private:
	double consumption = 0.05;

public:
	int Capacity = 0;
	Color color;
	Engine engine;
	FuelTank tank;
	std::vector<Product> cargo;

	Vehicle();
	bool checkFuel(int distance) const;
	void refuel();
	void drive(int distance);
	void startCar();
	void stopCar();
};

