#pragma once
#include <string>
#include <iostream>
using namespace std;
class Employee
{
private:
	string empName;
	int empNum;
	string dateHired;
public:
	Employee(string name, int num, string date);
	string getName();
	int getNum();
	string getDate();
};

