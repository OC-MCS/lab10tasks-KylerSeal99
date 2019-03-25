#pragma once
#include "Ship.h"
#include <iostream>
#include <string>
using namespace std;

class CargoShip : public Ship
{
private:
	int capacity;
public:
	CargoShip(int newCapacity, string newName, int newYear) : Ship(newName, newYear)
	{
		capacity = newCapacity;
	}
	int getCap() const;

	void displayShip() const;
};