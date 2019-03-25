#include "Ship.h"
#include <iostream>
#include <string>
using namespace std;

Ship::Ship(string newName, int newYear)
{
	name = newName;
	year = newYear;
}

string Ship::getName() const
{
	return name;
}

int Ship::getYear() const
{
	return year;
}

void Ship::displayShip() const
{
	cout << "Ship name: " << name << endl;
	cout << "Year built: " << year << endl;

}