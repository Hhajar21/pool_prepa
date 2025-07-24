#include <limits.h>
#include <stdio.h>
#include "unistd.h"
int reverse(int x) {
    long long int nb = x; // bach ntfadaw max and min int;
    int flag = 0;
    long long int rest = 0;
    if(nb < 0){
        nb *= -1;
        flag = 1;
    }
    while(nb >= 10){
        rest = (rest * 10) + (nb % 10);
        nb /= 10;
    }
    if(nb <= 9)
        rest = (rest * 10) + nb;
    if(flag == 1)
        rest *= -1;
    if(rest >= INT_MIN && rest <= INT_MAX)
        return rest;
    else    
        return 0;
}

int main(){
    int nb = reverse(1534236469);
    int n = reverse(1111111111);
    printf("%d\n",nb);
    printf("%d\n",n);
}