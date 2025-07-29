#include <stdio.h>
#include <stdlib.h>
char	*ft_itoa(int nbr){
    long int nb = nbr;
    char *rest;
    int i = 0;
    int star = 0;
    char tmp;
    int signe = 0;
    // 12 hit hia a7dad likynin fl max int;
    if(nb == 0){
        rest[0] = '0';
    }
    if(nb < 0){
        signe = 1;
        nb *= -1;
    }
    rest = malloc(sizeof(char) * nb);
    if(!rest)
        return NULL;
    while (nb >= 10)
    {
        rest[i++] = nb % 10 + '0';
        nb /= 10;
    }
    if(nb < 9){
        rest[i++] = nb % 10 + '0';
    }
    if(signe){
        rest[i++] = '-';
    }
    while(star < i ){
        tmp = rest[star];
        rest[star] = rest[i - 1];
        rest[i - 1] = tmp;
        star++;
        i--;
    }
    return rest;
}
int main(){
    printf("%s\n", ft_itoa(-1337));
    printf("%s\n", ft_itoa(-2147483648));
     printf("%s\n", ft_itoa(2147483647));
     printf("%s\n", ft_itoa(0));
}