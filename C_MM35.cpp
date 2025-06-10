#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll a;
    while (cin >> a) {
        if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0) {
            cout << "Bissextile Year" << endl;
        } else {
            cout << "Common Year" << endl;
        }
    }
    return 0;
}
