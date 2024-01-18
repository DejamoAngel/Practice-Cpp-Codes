#include <iostream>
using namespace std;


int main() {
   
    int myAge;
    int votingAge = 18;
    cout << "Enter Age: ";
    cin >> myAge;
   
   
    if (myAge >= votingAge) {
        cout << "Old Enough. You can Vote!";
    } else  {
        cout << "Not Old Enough. You can't vote.";
		    }
    
   
   
    return 0;
}

