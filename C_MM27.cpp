#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll a, b;
    while (cin >> a >> b) {
        ll sum = 0;
        if (a > b) {
            swap(a, b);
        }
        for (int i = a; i <= b; i++) {
            sum += i;
        }
        cout << sum << endl;
    }
    return 0;
}
