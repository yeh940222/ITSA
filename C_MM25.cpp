#include <stdio.h>
#include <math.h>
#include <ctype.h>
#define ll long long

int main(){
    ll a;
    while(scanf("%lld%lld", &a) != EOF){
        ll sum = 0;
        for(int i = 1; i <= a; i++){
            if(i%3 == 0){
                sum += i;
            }
        }
        printf("%lld\n", sum);
    }
}