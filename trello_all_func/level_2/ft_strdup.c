#include <stdlib.h>
#include <stdio.h>
int ft_strlen(char *str){
    int i = 0;
    while(str[i])
        i++;
    return i;
}
char    *ft_strdup(char *src){
    int i = 0;
    int len = ft_strlen(src) + 1;
    char *dest = malloc(sizeof(char) * len);
    while (src[i]){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
int main(){
    
    printf("%s\n", ft_strdup("hey hajar how have you been!!"));
}