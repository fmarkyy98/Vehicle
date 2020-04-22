#include "FuelTank.h"

FuelTank::FuelTank() : fuel(0), capacity(45) {}
void FuelTank::addFuel(double amount)
{
	if (fuel + amount <= capacity)
	{
		fuel += amount;
	}
	else
	{
		throw TankIsTooFullException;
	}
}
void FuelTank::consumeFuel(double amount)
{
	if (fuel >= amount)
	{
		fuel -= amount;
	}
	else
	{
		throw TankIsTooEmptyException;
	}
}
double FuelTank::getFuel() const
{
	return this->fuel;
}
double FuelTank::getCapacity() const
{
	return this->capacity;
}