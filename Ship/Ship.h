#pragma once
#include <iostream>
#include <string>
using namespace std;

class Ship
{
private:
	string name;
	int year;
public:
	Ship(string name, int year);
	string getName() const;
	int getYear() const;
	virtual void displayShip() const;
};