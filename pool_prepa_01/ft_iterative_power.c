#include <stdio.h>
int ft_iterative_power(int nb, int power){
    int rest = nb;
    if(power < 0)
        return 0;
    if (power == 0 || nb == 0)
        return(1);
    while (power > 1)
    {
        rest *= nb;
        power--;
    }
    return rest;
}
int main(){
    printf("%d\n",ft_iterative_power(3,2));
}