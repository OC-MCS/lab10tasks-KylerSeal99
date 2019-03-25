#include "FuelGauge.h"
#include <iostream>
using namespace std;


FuelGauge::FuelGauge()
{
	fuel = 0;
}

int FuelGauge::getFuel()
{
	return fuel;
}

void FuelGauge::fillFuel()
{
	fuel = fuel;
	for (int i = 0; i < 15; i++)
	{
		fuel++;
	}
	cout << "Filling fuel... \n";
}

void FuelGauge::useFuel()
{
	fuel--;
	cout << "Using fuel... \n";
}