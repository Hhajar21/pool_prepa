#include "ft_strs_to_tab.h"
void ft_putnbr(int nb){
    int long long nbr = nb;
    int i = 0;
    char rest[200];
    if(nbr < 0){
        write(1, "-", 1);
        nbr *= -1;
    }
    while (nbr >= 10)
    {
        rest[i++] = nbr % 10 + '0' ;
        nbr /=  10;
    }
    if (nbr <= 9)
       rest[i] = nbr + '0';
    while (i >= 0)
    {
       write(1, &rest[i], 1);
       i--;
    }
}
void ft_putstr(char *str){
    int i = 0;
    while (str[i])
        write(1, &str[i++], 1);
}
void ft_show_tab(struct s_stock_str *par){
    int i = 0;
    while(par[i].str){
        ft_putstr(par[i].str);
        write(1, "\n", 1);
        ft_putnbr(par[i].size);
        write(1, "\n",1);
        ft_putstr(par[i].copy);
        write(1, "\n", 1);
        i++;
    }
}