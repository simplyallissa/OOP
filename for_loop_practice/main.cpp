#include <iostream>
#include <cmath>

using std::cout;
using std::endl;
using std::ios;
using std::fixed;

#include <iomanip>

using std::setw;
using std::setprecision;

int main() {

    double p = 1000.00;
    double r = .05;
    double a = 0;

    cout << "Year" << setw (21) << "Amount on deposit" << endl;
    cout << fixed << setprecision(2);

    for (int n = 1; n <= 10; n += 1) {
        a = p * pow(1 + r, n);
        cout << setw(4) << n
             << setw(21) << a << endl;
    }
    return 0;
}
