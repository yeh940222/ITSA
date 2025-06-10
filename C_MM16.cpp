#include <stdio.h>
#include <math.h>
#define ll long long

int main(){
    ll x, y;
    while(scanf("%lld%lld", &x, &y) != EOF){
        if(sqrt(x * x + y * y) <= 100){
            printf("inside\n");
        }
        else{
            printf("outside\n");
        }
    }
}