#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int min;
    while(cin >> min){
        if(min <= 800){
            cout << fixed << setprecision(1) << (double)min * 0.9 << "\n";
        }
        else if(min < 1500){
            cout << fixed << setprecision(1) << (double)min * 0.9 * 0.9 << "\n";
        }
        else{
            cout << fixed << setprecision(1) << (double)min * 0.9 * 0.79 << "\n";
        }
    }
}
