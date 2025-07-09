#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base)
{
    int		base_len;
    char	result[32];
    int		i;
    int     j;
    long long int   nb = nbr;

    base_len = 0;
    j = base_len  + 1;
    while (base[base_len])
    {
        if (base[base_len] == '+' || base[base_len] == '-' ||
            (base[base_len] >= 9 && base[base_len] <= 13) || base[base_len] == ' ')
            return;
        while (base[j]){
            if (base[j] == base[base_len])
                return;
            j++;
        }
        base_len++;
    }
    if (base_len < 2)
        return;

    
    if (nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }
    i = 0;
    while (nb)
    {
        result[i++] = base[nb % base_len];
        nb /= base_len;
    }
    i--;
    while (i >= 0){
        write(1, &result[i], 1);
        i--;
    }
}
int main(void)
{
    ft_putnbr_base(255, "01");       // Binary representation
    write(1, "\n", 1);
    ft_putnbr_base(255, "0123456789ABCDEF"); // Hexadecimal representation
    write(1, "\n", 1);
    ft_putnbr_base(-255, "0123456789"); // Decimal representation with negative number
    write(1, "\n", 1);
    ft_putnbr_base(255, "01234567");   // Octal representation
    write(1, "\n", 1);
    ft_putnbr_base(255, "poneyvif");  // Custom base
    write(1, "\n", 1);
    return 0;
}