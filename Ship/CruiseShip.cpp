#include "Ship.h"
#include "CruiseShip.h"
#include <iostream>
#include <string>
using namespace std;

int CruiseShip::getMaxPass() const
{
	return maxPass;
}

void CruiseShip::displayShip() const
{
	cout << "Cruise Ship Name: " << getName() << endl;
	cout << "Max Passengers: " << getMaxPass() << endl;
}