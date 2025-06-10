#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll a;
    while (cin >> a) {
        for (int i = 1; i <= a; i++) {
            if (i == 35) {
                cout << i;
            } else if (i % 5 == 0 && i % 7 == 0) {
                cout << " " << i;
            }
        }
        cout << endl;
    }
    return 0;
}
