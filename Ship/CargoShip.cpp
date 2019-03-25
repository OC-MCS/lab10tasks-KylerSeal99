#include "Ship.h"
#include "CargoShip.h"
#include <iostream>
#include <string>
using namespace std;

int CargoShip::getCap() const
{
	return capacity;
}

void CargoShip::displayShip() const
{
	cout << "Cargo Ship Name: " << getName() << endl;
	cout << "Maximum Capacity: " << getCap() << endl;
}
