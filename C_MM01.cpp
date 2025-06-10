#include <bits/stdc++.h>

int main(){
    int up, down, height;
    while(std::cin >> up >> down >> height){
        double area = (double)((up + down) * height)/2.0;
        std::cout << "Trapezoid area:" << std::fixed << std::setprecision(1) << area << "\n";
    }
}