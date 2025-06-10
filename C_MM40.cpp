#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll x;
    while (cin >> x) {
        cout << "1 ";
        ll sum = 1;
        for (ll i = 2; i <= x; i++) {
            sum += i;
            cout << "+ " << i << " ";
        }
        cout << "= " << sum << endl;
    }
    return 0;
}
