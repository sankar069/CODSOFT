#include <iostream>
using namespace std;

int main() {
    double n1, n2, result;
    char temp;

   
    cout << "Simple Calculator\n";
    cout << "Enter the first number: ";
    cin >> n1;

    cout << "Enter the operator (+, -, *, /): ";
    cin >> temp;

    cout << "Enter the second number: ";
    cin >> n2;

 
    switch(temp) {
        case '+':
            result = n1 + n2;
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = n1 - n2;
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = n1 * n2;
            cout << "Result: " << result << endl;
            break;
        case '/':
            if (n2 != 0) {
                result = n1 / n2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Cannot divide by zero!" << endl;
            }
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}
