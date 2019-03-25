#include "Odometer.h" 
#include "FuelGauge.h"

Odometer::Odometer()
{
	mileage = 0;
}

int Odometer::getMileage(Odometer) 
{
	return mileage;
}

void Odometer::addMile(FuelGauge &fuelTank)
{
	if (mileage < 1000000)
	{
		mileage++;
	}
	else
		mileage = 0;
	if (mileage % 24 == 0)
		fuelTank.useFuel();
	
}
