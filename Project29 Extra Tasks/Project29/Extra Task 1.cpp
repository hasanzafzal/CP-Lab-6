#include <iostream>
using namespace std;

int main() {
    double sum = 0, t = 1;
    int n, i;

    cout << " Input the value for nth term: ";
    cin >> n;

    for (i = 1; i <= n; ++i) {
        cout << "1/" << i << "^" << i << " = ";

        
        for (int j = 1; j < i; ++j) {
            t /= i;
        }

        cout << t << endl;
        sum += t;
        t = 1;
    }

    cout << " The sum of the above series is: " << sum << endl;

    return 0;
}