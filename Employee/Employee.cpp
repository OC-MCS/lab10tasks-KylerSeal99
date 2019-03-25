#include "Employee.h"
#include <string>
#include <iostream>
using namespace std;


Employee::Employee(string name, int num, string date)
{
	empName = name;
	empNum = num;
	dateHired = date;
}

string Employee::getName()
{
	return empName;
}

int Employee::getNum()
{
	return empNum;
}

string Employee::getDate()
{
	return dateHired;
}

