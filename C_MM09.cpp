#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll i;
    while (cin >> i) {
        if (i > 31) {
            cout << "Value of more than 31" << endl;
        } else {
            cout << (1LL << i) << endl;
        }
    }
    return 0;
}
