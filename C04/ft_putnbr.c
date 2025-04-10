#include "unistd.h"
void ft_putchar(char c){
    write(1,&c,1);
}
//----------------------normal put nbr -----------------------
// void ft_putnbr(int nb){
// char rest[200] ;
// int i = 0;
// long long int nbr = nb;
// if(nbr < 0){
//     ft_putchar('-');
//     nbr *= -1;
// }
// while (nbr >= 10)
// {
//     rest[i] = nbr % 10 + '0';
//     nbr /= 10;
//     i++;
// }
// if(nbr <= 9)
//     rest[i] = nbr + '0';
// while (i >= 0)
// {
//     ft_putchar(rest[i]);
//     i--;
// }
// ft_putchar('\n');
// }

void ft_putnbr(int nb){
    long long int nbr = nb;
    if(nbr < 0){
        ft_putchar('-');
        nbr *= -1;
    }
    if(nbr >= 10)
    {
        ft_putnbr(nbr / 10);
    }
    ft_putchar(nbr % 10 + '0');
    
}
int main(){
    ft_putnbr(1337);
    write(1,"\n",1);
    ft_putnbr(-1337);
    write(1,"\n",1);
}