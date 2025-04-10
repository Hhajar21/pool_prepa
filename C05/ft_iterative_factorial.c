int ft_iterative_factorial(int nb){
    int rest;

    rest = 1;
    if (nb < 0)
        return (0);
    while (nb > 0)
    {
        rest *= nb;
        nb--;
    }
    return (rest);
    
 }
#include <stdio.h>
 int main(void)
{
    printf("%i\n", ft_iterative_factorial(6));
}