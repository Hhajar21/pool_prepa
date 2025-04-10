int ft_iterative_power(int nb, int power){
    int rest;

    rest = nb;
    if (power == 0 || nb == 0)
        return(1);
    if (power < 0)
        return 0;
    while (power > 1){
        rest *= nb;
       power--;
    }
    return (rest);
}
#include <stdio.h>
 int main(void)
{
    printf("%i\n", ft_iterative_power(2, 2));
}