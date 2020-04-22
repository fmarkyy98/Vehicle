#pragma once
enum Exception
{
	TankIsTooFullException,
	TankIsTooEmptyException
};

class FuelTank
{
private:
	double fuel = 0;
	double capacity = 45;

public:
	FuelTank();
	void addFuel(double amount);
	void consumeFuel(double amount);
	double getFuel() const;
	double getCapacity() const;
};

