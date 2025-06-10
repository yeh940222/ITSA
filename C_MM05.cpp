#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    double edge;
    while (cin >> edge) {
        cout << fixed << setprecision(1) << round(edge * edge * 10) / 10.0 << endl;
    }
    return 0;
}
