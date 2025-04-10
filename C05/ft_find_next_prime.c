#include <stdbool.h>

bool is_prime(int nb)
{
    if (nb <= 1)
        return false;
    for (int i = 2; i * i <= nb; i++)
    {
        if (nb % i == 0)
            return false;
    }
    return true;
}

int ft_find_next_prime(int nb)
{
    if (nb <= 2)
        return 2;
    while (!is_prime(nb))
        nb++;
    return nb;
}