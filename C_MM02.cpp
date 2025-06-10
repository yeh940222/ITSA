#include <bits/stdc++.h>
using namespace std;

int main() {
    int down, height;
    while (cin >> down >> height) {
        double area = (double)(down * height) / 2.0;
        cout << fixed << setprecision(1) << area << endl;
    }
    return 0;
}
