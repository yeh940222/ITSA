#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    ll x, y;
    while (cin >> x >> y) {
        cout << gcd(x, y) << endl;
    }
    return 0;
}
