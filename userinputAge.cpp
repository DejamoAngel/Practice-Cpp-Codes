#include <iostream>
using namespace std;

int main() {
	
	int age;
	
	cout << "Enter age: ";
	cin >> age;
	
	if(age <= 17) {
		cout << "Still a minor.";
	} else {
		cout << "Legal age.";
	}
	
	return 0;

}

