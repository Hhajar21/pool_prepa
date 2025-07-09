#include "unistd.h"
void ft_putchar(char c){
    write(1, &c, 1);
}
void ft_putnbr(int nb){
    long long int n = nb;
    if(n < 0){
        write(1, "-", 1);
        n *= -1;
    }
    if(n >= 10){
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
    else
        ft_putchar(n % 10+ '0');

}

int main(){
    ft_putnbr(-42);
    write(1,"\n",1);
    ft_putnbr(1337);
    write(1,"\n",1);
    ft_putnbr(-2147483648);
    write(1,"\n",1);

}