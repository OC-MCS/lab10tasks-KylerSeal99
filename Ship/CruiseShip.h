#pragma once
#include "Ship.h"
#include <iostream>
#include <string>
using namespace std;

class CruiseShip : public Ship
{
private:
	int maxPass;
public:
	CruiseShip(int newMaxPass, string name, int year) : Ship::Ship(name, year)
	{
		maxPass = newMaxPass;
	}
	int getMaxPass() const;
	void displayShip() const;
};