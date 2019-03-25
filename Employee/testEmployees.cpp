// main goes here
#include "ProductionWorker.h"
#include "Employee.h"
#include "ShiftSupervisor.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	ProductionWorker p1(1, 15, "TestSubject1", 413213, "3/11/19");

	cout << "Production Worker: " << p1.getName() << endl;
	cout << "Shift: " << p1.getShift() << endl;
	cout << "Pay Rate: $" << p1.getPay() << endl;
	cout << "Number: " << p1.getNum() << endl;
	cout << "Date Hired: " << p1.getDate() << endl;

	ShiftSupervisor s1(60000, 5000, "Test Subject 2", 413214, "3/13/19");

	cout << endl;
	cout << "Shift Supervisor: " << s1.getName() << endl;
	cout << "Salary: $" << s1.getSal() << endl;
	cout << "Bonus: $" << s1.getBon() << endl;
	cout << "Number: " << s1.getNum() << endl;
	cout << "Date Hired: " << s1.getDate() << endl;


}