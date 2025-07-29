#include <stdlib.h>
char	*ft_itoa_base(int value, int base){
    long long int nb = value;
    char degit_base[] = "0123456789abcdef";
    int reminder = 0;
    int signe = 0;
    int start = 0;
    char tmp;
    int i =  0;
    char *rest = malloc(35);// safe size for all bases
    if(!rest)
        return NULL;
    if(nb < 0){
        signe = 1;
        nb *= -1;
    }
    if(nb == 0){
        rest[i++] = '0';
    }
    while (nb)
    {
        reminder = nb % base;
        rest [i++] = degit_base[reminder];
        nb /= base;
    }
    if(signe)
        rest[i++] = '-';
    
    i--;
    while (start < i)
    {
        tmp = rest[i];
        rest[i] = rest[start];
        rest[start] = tmp;
        i--;
        start++;
    }
    return rest;
}
#include <stdio.h>
int main(){
    printf("%s\n", ft_itoa_base(2, 2));
    printf("%s\n", ft_itoa_base(42, 10));
    printf("%s\n", ft_itoa_base(42, 16));
}