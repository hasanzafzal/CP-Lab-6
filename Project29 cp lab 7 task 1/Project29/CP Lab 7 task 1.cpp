#include <iostream>
using namespace std;

void swapped(int& a, int& b) {
    int temp = a;
   a = b;
    b = temp;

    cout << "Value of a after exchange: " << a << endl;
    cout << "Value of b after exchange: " << b << endl;
}

int main() 
{
    int a, b;
    cout << "Enter the value of a = ";
    cin >> a;
    cout << "Enter the value of b = ";
    cin >> b;
    swapped(a, b);
 }