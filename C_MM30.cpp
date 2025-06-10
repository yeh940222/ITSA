#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll a;
    while (cin >> a) {
        int is_prime = 1;
        for (int i = 2; i < a; i++) {
            if (a % i == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
