#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll a, b;
    while (cin >> a >> b) {
        cout << a << "+" << b << "=" << a + b << endl;
        cout << a << "*" << b << "=" << a * b << endl;
        cout << a << "-" << b << "=" << a - b << endl;
        if (a % b >= 0) {
            cout << a << "/" << b << "=" << a / b << "..." << abs(a % b) << endl;
        } else {
            if (a / b < 0) {
                cout << a << "/" << b << "=" << a / b - 1 << "..." << a - b * (a / b - 1) << endl;
            } else {
                cout << a << "/" << b << "=" << a / b + 1 << "..." << a - b * (a / b + 1) << endl;
            }
        }
    }
    return 0;
}
