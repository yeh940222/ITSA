#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    while (cin >> n) {
        ll f = 1;
        while (n) {
            f *= n--;
        }
        cout << f << endl;
    }
    return 0;
}
