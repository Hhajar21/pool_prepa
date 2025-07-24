#include <limits.h>
#include <stdio.h>
#include "unistd.h"
#include <stdbool.h>
int reverse_int(int x){
    long long int nb = x;
    long long int rev_in = 0;
    while(nb >= 10){
        rev_in = (rev_in * 10) + (nb % 10);
        nb /= 10;
    }
    if(nb <= 9)
        rev_in = (rev_in * 10) + nb;
    if(rev_in >= INT_MIN && rev_in <= INT_MAX)
        return rev_in;
    else
        return 0;
}
bool isPalindrome(int x) {
    long long int nb = x;
    long long int rev_nb = reverse_int(nb);
    
    if(nb < 0)
        return 0;
    else if(nb == rev_nb)
        return 1;
    else
        return 0;
}
int main(){
    int nb = isPalindrome(112);
    printf("%d\n", nb);
    int n = isPalindrome(-212);
    printf("%d\n", n);
}