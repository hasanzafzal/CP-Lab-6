#include <iostream>
using namespace std;

int sum(int a, int b) { return a + b; }
float sum(float a, float b) { return a + b; }

int main() {
    int num1, num2;
    float flnum1, flnum2;

    cout << "Enter the first integer value: ";
    cin >> num1;
    cout << "Enter the second integer value: ";
    cin >> num2;
    cout << "Sum of " << num1 << " & " << num2 << " is = " << sum(num1, num2) << endl;

    cout << "\nEnter the first float value = ";
    cin >> flnum1;
    cout << "\nEnter the second float value = ";
    cin >> flnum2;
    cout << "Sum of " << flnum1 << " & " << flnum2 << " is = " << sum(flnum1, flnum2) << endl;

    return 0;
}