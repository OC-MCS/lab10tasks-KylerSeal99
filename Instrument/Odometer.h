#pragma once
#include "FuelGauge.h"

class Odometer
{
private:
	int mileage;
public:
	Odometer();
	int getMileage(Odometer);
	void addMile(FuelGauge &);
};

