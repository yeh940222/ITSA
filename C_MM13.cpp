#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int h1, h2, m1, m2;
    while (cin >> h1 >> m1 >> h2 >> m2) {
        int sum = 60 * (h2 - h1) + m2 - m1;
        if (sum > 240) {
            cout << 280 + (60 * ((sum - 240) / 30)) << endl;
        } else if (sum > 120) {
            cout << 120 + (40 * ((sum - 120) / 30)) << endl;
        } else {
            cout << 30 * (sum / 30) << endl;
        }
    }
    return 0;
}
