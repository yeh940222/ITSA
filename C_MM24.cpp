#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll a, b;
    while (cin >> a >> b) {
        if (a <= 60) {
            cout << fixed << setprecision(1) << (double)a * (double)b << endl;
        } else if (a <= 120) {
            cout << fixed << setprecision(1)
                 << (double)b * 60.0 + ((double)a - 60.0) * (double)b * 1.33 << endl;
        } else {
            cout << fixed << setprecision(1)
                 << (double)b * 60.0 + (double)b * 60.0 * 1.33 + ((double)a - 120) * (double)b * 1.66 << endl;
        }
    }
    return 0;
}
