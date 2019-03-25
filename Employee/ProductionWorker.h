#pragma once
#include <string>
#include <iostream>
#include "Employee.h"
class ProductionWorker : public Employee 
{
private:
	int shift;
	double payRate;
public:
	ProductionWorker(int newShift, double newPay, string name, int num, string date) : Employee::Employee(name, num, date)
	{
		shift = newShift;
		payRate = newPay;
	}
	int getShift();
	double getPay();
};

