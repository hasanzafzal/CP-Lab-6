#include <iostream>
using namespace std;

int main() {
    int choice;
    float a, b, result;
    const float PI = 3.14159;

    cout << "Choose shape:\n 1 for Square,\n 2 for Rectangle,\n 3 for Circle\n ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "Enter side: ";
        cin >> a;
        result = a * a;
        break;
    case 2:
        cout << "Enter length: ";
        cin >> a;
        cout << "Enter breadth: ";
        cin >> b;
        result = a * b;
        break;
    case 3:
        cout << "Enter radius: ";
        cin >> a;
        result = PI * a * a;
        break;
    default:
        cout << "Invalid choice.";
        return 0;
    }

    cout << "Area: " << result << endl;

    return 0;
}