#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll a;
    while (cin >> a) {
        for (int i = 1; i <= a; i++) {
            cout << i << "*" << i << "=" << i * i << endl;
        }
    }
    return 0;
}
