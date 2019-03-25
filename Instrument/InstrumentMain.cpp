// main code goes here
#include "FuelGauge.h"
#include "Odometer.h"
#include <iostream>
using namespace std;

int main()
{
	FuelGauge f;
	Odometer o;

	cout << "Vehicle's fuel is empty: " << f.getFuel() << endl;
	f.fillFuel();
	cout << "Vehicle is full! Current Fuel: " << f.getFuel() << endl;

	while (f.getFuel() > 0)
	{
		o.addMile(f);
		cout << "Current Fuel: " << f.getFuel() << endl;
		cout << "Current mileage: " << o.getMileage(o) << endl;
	}




	return 0;
}