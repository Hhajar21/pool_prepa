#include <stdio.h>
int ft_recursive_power(int nb, int power){
    int rest = nb;
    if(power < 0)
        return 0;
    if (power == 0 || nb == 0)
        return(1);
    if(power > 1)
        return (nb * ft_recursive_power(nb, (power - 1)));
    return rest;
}

int main(){
    printf("%d\n",ft_recursive_power(4,2));
}