int ft_iterative_factorial(int nb){
    int rest = 1;
    if(nb < 0)
        return 0;
    while(nb > 0){
        rest *= nb;
        nb--;
    }
    return rest;
}
#include <stdio.h>
int main(){
    printf("%d\n",ft_iterative_factorial(5));
}