#include <iostream>
using namespace std;

int main() {
    double x, sum = 0;
    int n, i;

    cout << "Input the value of x: ";
    cin >> x;
    cout << "Input number of terms: ";
    cin >> n;

    cout << "The values of series:\n";

    double term_1 = x; 
    for (i = 1; i <= n; ++i) {
        cout << term_1 << endl;
        sum += term_1;

        double term_2 = -term_1 * x * x;
        term_1 = term_2;
    }

    cout << "The sum of the series upto " << n << " term is: " << sum << endl;

    return 0;
}
