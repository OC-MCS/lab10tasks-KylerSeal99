#pragma once
#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;

class ShiftSupervisor : public Employee
{
private:
	double salary;
	double bonus;
public:
	ShiftSupervisor(double newSal, double newBon, string name, int num, string date) : Employee::Employee(name, num, date)
	{
		salary = newSal;
		bonus = newBon;
	}
	double getSal();
	double getBon();
};
