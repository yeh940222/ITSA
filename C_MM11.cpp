#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll c;
    while (cin >> c) {
        cout << "NT10=" << c / 10 << endl;
        c %= 10;
        cout << "NT5=" << c / 5 << endl;
        c %= 5;
        cout << "NT1=" << c << endl;
    }
    return 0;
}
