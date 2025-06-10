#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll s;
    cin >> s;
    cout << s / 86400 << " days" << endl;
    s %= 86400;
    cout << s / 3600 << " hours" << endl;
    s %= 3600;
    cout << s / 60 << " minutes" << endl;
    cout << s % 60 << " seconds" << endl;
    return 0;
}
