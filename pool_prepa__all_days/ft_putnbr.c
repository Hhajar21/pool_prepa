#include "unistd.h"
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
int main(){
    ft_putnbr(1337);
    write(1, "\n", 1);
    
}