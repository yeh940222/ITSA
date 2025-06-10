#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll a, b, c;
    while (cin >> a >> b >> c) {
        int is_triangle = 1;
        if (a + b <= c) is_triangle = 0;
        if (a + c <= b) is_triangle = 0;
        if (b + c <= a) is_triangle = 0;
        if (is_triangle) {
            cout << "fit" << endl;
        } else {
            cout << "unfit" << endl;
        }
    }
    return 0;
}
