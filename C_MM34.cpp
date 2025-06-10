#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll a;
    while (cin >> a) {
        cout << "1";
        for (int i = 2; i < a; i++) {
            if (a % i == 0) {
                cout << " " << i;
            }
        }
        cout << " " << a << endl;
    }
    return 0;
}
