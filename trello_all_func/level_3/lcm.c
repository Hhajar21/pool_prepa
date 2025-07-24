unsigned int GCD(unsigned int a, unsigned int b){
    unsigned int tmp;
    unsigned int rest = 0;
    while(b != 0){
        tmp = b;
        b = a % b;
        a = tmp;
    }
    rest = a;
    return rest;
}
 unsigned int    lcm(unsigned int a, unsigned int b){
    unsigned int rest = 0;
    if(a == 0 || b == 0)
        return 0;
    rest = (a * b) / GCD(a,b);
    return rest;
}
#include <stdio.h>
int main(){
   printf("%d\n", lcm(18,12)); 
}