#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

void showMenu() {
    cout << "\n========= Scientific Calculator =========\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Power (x^y)\n";
    cout << "6. Square Root\n";
    cout << "7. Logarithm (Base 10)\n";
    cout << "8. Natural Log (ln)\n";
    cout << "9. Sine (sin x)\n";
    cout << "10. Cosine (cos x)\n";
    cout << "11. Tangent (tan x)\n";
    cout << "12. Factorial\n";
    cout << "0. Exit\n";
    cout << "=========================================\n";
    cout << "Enter your choice: ";
}

long long factorial(int n) {
    if (n < 0) return -1;
    if (n == 0 || n == 1) return 1;
    long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int choice;
    double num1, num2, result;

    do {
        showMenu();
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input! Please enter a number from the menu.\n";
            continue;
        }

        switch (choice) {
            case 1: 
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 + num2 << endl;
                break;
            case 2: 
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 - num2 << endl;
                break;
            case 3: 
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 * num2 << endl;
                break;
            case 4: 
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                if (num2 == 0)
                    cout << "Error! Division by zero.\n";
                else
                    cout << "Result: " << num1 / num2 << endl;
                break;
            case 5: 
                cout << "Enter base and exponent: ";
                cin >> num1 >> num2;
                cout << "Result: " << pow(num1, num2) << endl;
                break;
            case 6: 
                cout << "Enter number: ";
                cin >> num1;
                if (num1 < 0)
                    cout << "Error! Square root of negative number is not real.\n";
                else
                    cout << "Result: " << sqrt(num1) << endl;
                break;
            case 7: 
                cout << "Enter number: ";
                cin >> num1;
                if (num1 <= 0)
                    cout << "Error! Logarithm undefined for non-positive values.\n";
                else
                    cout << "Result: " << log10(num1) << endl;
                break;
            case 8: 
                cout << "Enter number: ";
                cin >> num1;
                if (num1 <= 0)
                    cout << "Error! Logarithm undefined for non-positive values.\n";
                else
                    cout << "Result: " << log(num1) << endl;
                break;
            case 9: 
                cout << "Enter angle in degrees: ";
                cin >> num1;
                cout << "Result: " << sin(num1 * M_PI / 180) << endl;
                break;
            case 10;
                cout << "Enter angle in degrees: ";
                cin >> num1;
                cout << "Result: " << cos(num1 * M_PI / 180) << endl;
                break;
            case 11: 
                cout << "Enter angle in degrees: ";
                cin >> num1;
                if (fmod(num1, 90) == 0 && fmod(num1, 180) != 0)
                    cout << "Error! Tangent is undefined at " << num1 << " degrees.\n";
                else
                    cout << "Result: " << tan(num1 * M_PI / 180) << endl;
                break;
            case 12: 
                int n;
                cout << "Enter a non-negative integer: ";
                cin >> n;
                if (n < 0)
                    cout << "Error! Factorial is undefined for negative numbers.\n";
                else
                    cout << "Result: " << factorial(n) << endl;
                break;
            case 0:
                cout << "Exiting calculator. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}
