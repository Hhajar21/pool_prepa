#include <stdlib.h>
#include <stdio.h>
void ft_putnbr(int x){
    long long int nb = x;
    int i = 0;
    char *rest ;
    if(nb < 0){
        printf("-");
        nb *= -1;
    }
    rest = malloc(sizeof(char) * 12);
    if(!rest)
        return;
    if (nb == 0) 
        printf("0");
    while (nb > 0){
        rest[i++] = nb % 10 + '0';
        nb /= 10;
    }
    i--;
    while(i >= 0){
        printf("%c",rest[i]);
        i--;
    }
    free(rest);
}
 int GCD( int a,  int b){
     int tmp;
     int rest = 0;
    while(b != 0){
        tmp = b;
        b = a % b;
        a = tmp;
    }
    rest = a;
    return rest;
}
int main(int ac, char **av){
    int av_1;
    int av_2;
    int GCD_res;
    if(ac == 3){
        av_1 = atoi(av[1]);
        av_2 = atoi(av[2]);
        GCD_res = GCD(av_1,av_2);
        ft_putnbr(GCD_res);
        printf("\n");
    }else
        printf("\n");
}