#include <stdbool.h>
#include <stdio.h>
int is_prime(int nb)
{
    int i = 2;
    if (nb <= 1)
        return false;

    while (i * i <= nb)
    {
        if (nb % i == 0)
            return 0;
        i++;
    }
    return 1;
}

int ft_find_next_prime(int nb)
{
    if (nb <= 2)
        return 2;
    while (!is_prime(nb))
        nb++;
    return nb;
} 

int main(){
    printf("%d\n",ft_find_next_prime(1));
}