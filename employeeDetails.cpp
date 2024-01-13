#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	
	string firstName, lastName;
	float ratePerHour, hoursPerWorked, grossPay, deduction, netPay;
	
	cout << "First Name: ";
	cin >> firstName;
	cout << "Last Name: ";
	cin >> lastName;
	cout << "Rate Per Hour: ";
	cin >> ratePerHour;
	cout << "Hours Per Worked: ";
	cin >> hoursPerWorked;
	
	grossPay = ratePerHour * hoursPerWorked;
	deduction = 300.00;
	netPay = grossPay - deduction;
	cout << fixed << setprecision(2);
	
	cout << "Employee Name: " << firstName << " " << lastName;
	cout << "\nGross Pay: Php " << grossPay;
	cout << "\nDeduction: Php " << deduction;
	cout << "\nNet Pay: Php " << netPay;
	
	return 0;

}

