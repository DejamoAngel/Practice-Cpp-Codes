#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char operation;
    double num1, num2, result;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the operation (+, -, *, /, %): ";
    cin >> operation;

    cout << "Enter the second number: ";
    cin >> num2;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error! Division by zero is not allowed." << endl;
                return 0;
            }
            break;
        case '%':
            if (static_cast<int>(num2) != 0) {
                result = static_cast<int>(num1) % static_cast<int>(num2);
            } else {
                cout << "Error! Division by zero is not allowed." << endl;
                return 0;
            }
            break;
        default:
            cout << "Error! Invalid operation." << endl;
            return 0;
    }

    cout << "The result is: " << result << endl;

    return 0;
}

