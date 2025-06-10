#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll a;
    while (cin >> a) {
        ll Armstrong = 0, tmp = a;
        Armstrong += pow(tmp / 100, 3);
        tmp %= 100;
        Armstrong += pow(tmp / 10, 3);
        tmp %= 10;
        Armstrong += pow(tmp, 3);
        if (Armstrong == a) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
