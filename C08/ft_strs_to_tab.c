#include <unistd.h>
#include "ft_stock_str.h"
void	put_nbr(int nb)
{
	unsigned int	n;

	n = nb;
	if (nb < 0)
	{
		 write(1, "-", 1);
		n *= -1;
	}
	if (n < 10){
		n = n + '0';
        write(1, &n, 1);
    }
	else
	{
		put_nbr(n / 10);
		put_nbr(n % 10);
	}
}
void	put_str(char *str)
{
	while (*str)
		write(1, str++, 1);
}


void ft_show_tab(struct s_stock_str *par){
    int	i;

	i = 0;
    while (par[i].str)
    {
        put_str(par[i].str);
        write(1, "\n", 1);
        put_nbr(par[i].size);
		write(1, "\n", 1);
		put_str(par[i].copy);
		write(1, "\n", 1);
		i++;
    }
    
}