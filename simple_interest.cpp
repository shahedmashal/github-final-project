#include <iostream>
using namespace std;

int main() {
    double p, t, r, simple_interest;

    cout << "Enter principal amount: ";
    cin >> p;

    cout << "Enter time in years: ";
    cin >> t;

    cout << "Enter rate of interest: ";
    cin >> r;

    simple_interest = (p * t * r) / 100;

    cout << "Simple Interest = " << simple_interest << endl;

    return 0;
}
