#include <vector>
#include "Engine.h"
#include "FuelTank.h"
#include "Product.h"
#include "Vehicle.h"

Vehicle::Vehicle() : consumption(0.05), Capacity(0), color(Blue) { }
bool Vehicle::checkFuel(int distance) const
{
	bool result = distance * this->consumption <= this->tank.getFuel();
	return result;
}
void Vehicle::refuel()
{
	this->tank.addFuel(this->tank.getCapacity() - this->tank.getFuel());
}
void Vehicle::drive(int distance)
{
	this->startCar();
	this->tank.consumeFuel(distance * this->consumption);
	this->stopCar();
}
void Vehicle::startCar()
{
	if (!this->engine.getIsRuning())
	{
		this->engine.start();
	}
}
void Vehicle::stopCar()
{
	if (this->engine.getIsRuning())
	{
		this->engine.stop();
	}
}