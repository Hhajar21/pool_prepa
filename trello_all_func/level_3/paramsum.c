#include <unistd.h>
void ft_putnbr(int x){
    long long int nb = x;
    int i = 0;
    char rest[200];
    if(nb < 0){
        write(1, "-",1);
        nb *= -1;
    }
    while (nb != 0){
        rest[i++] = nb % 10 + '0';
        nb /= 10;
    }
    i--;
    while(i >= 0){
        write(1, &rest[i],1);
        i--;
    }
}

int main(int ac, char ** av){
    if(ac == 1){
        write(1, "0",1);
    }else
        ft_putnbr(ac - 1);
    write(1,"\n",1);
}