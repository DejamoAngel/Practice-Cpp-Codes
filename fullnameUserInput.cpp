#include <iostream>
#include <string>
using namespace std;


int main() {
   
    string fName, mName, lName, fullName;
    cout << "Enter First Name: ";
    cin >> fName;
    cout << "Enter Midde Name: ";
    cin >> mName;
    cout << "Enter Last Name: ";
    cin >> lName;
    fullName = fName+" "+mName+" "+lName;	//it's okay if it's double quotes(" ") or single quotes(' ')
    cout << "Full Name is: " << fullName;
   


    return 0;
}

