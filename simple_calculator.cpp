#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char op;

   
    cout << "🔢 Simple Calculator\n";
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter the second number: ";
    cin >> num2;

 
    switch(op) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            } else {
                cout << "⚠️ Error: Cannot divide by zero!" << endl;
            }
            break;
        default:
            cout << "❌ Invalid operator!" << endl;
    }

    return 0;
}
