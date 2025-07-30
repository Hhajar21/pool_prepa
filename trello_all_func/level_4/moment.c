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
        rest = malloc(sizeof(char) * 2);
        if (!rest)
            return NULL;
        rest[0] = '0';
        rest[1] = '\0';
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
int len(char *str){
    int i = 0;
    while(str[i])
        i++;
    return i;
}
char *ft_strcat(char *dest, char *src){
    int i = 0;
    int j = len(dest);
    while (src[i]){
        dest[j] = src[i];
        i++;
        j++;
    }
    return dest;
    
}
char    *moment(unsigned int duration){
    char *rest;
    if(duration < 60){
        rest = ft_itoa(duration);
        ft_strcat(rest , " seconds ago");
        
    }else if(duration < 3600){
        duration /= 60;
        rest = ft_itoa(duration);
        ft_strcat(rest , " minutes ago");
    }else if(duration < 86400){
        duration /= 3600;
        rest = ft_itoa(duration);
        ft_strcat(rest, " hours ago ");
    }
    else if(duration < 2592000){
        duration /= 86400;
        rest = ft_itoa(duration);
        ft_strcat(rest, " days ago");
    }
    else if(duration >= 2592000){
        duration /= 2592000;
        rest = ft_itoa(duration);
        ft_strcat(rest, " months ago ");
        
    }
    return (rest);
}
#include <stdio.h>
int main(){
    unsigned int n = 0;
    printf("%s\n", moment(n));
}