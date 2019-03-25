#include "Ship.h"
#include "CargoShip.h"
#include "CruiseShip.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	const int numTests = 3;
	Ship *tests[numTests] =
	{
		new Ship("Little Boat", 1000),
		new CruiseShip(4000, "Princess", 2009),
		new CargoShip(100000, "SS Big Boy", 1999)
	};

	for (int i = 0; i < numTests; i++)
	{
		cout << "Ship " << i + 1 << ": \n";
		tests[i]->displayShip();
		cout << endl;
	}

	return 0;
}