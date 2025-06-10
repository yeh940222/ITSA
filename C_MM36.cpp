#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll a;
    while (cin >> a) {
        if (a >= 3 && a <= 5) {
            cout << "Spring" << endl;
        } else if (a >= 6 && a <= 8) {
            cout << "Summer" << endl;
        } else if (a >= 9 && a <= 11) {
            cout << "Autumn" << endl;
        } else {
            cout << "Winter" << endl;
        }
    }
    return 0;
}
