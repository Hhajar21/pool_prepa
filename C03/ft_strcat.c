int ft_strlen(char *str){
    int i = 0;
    while (str[i])
        i++;
    return i;
}
char *ft_strcat(char *dest, char *src){
    int dest_len = ft_strlen(dest);
    int i = 0;
    while (src[i])
       dest[dest_len++] = src[i++];
    dest[dest_len] = '\0';
    return dest;
}
#include <stdio.h>
int main(){
    char dest[30] = "hey hajar ";
    char src[] = "how are you";
     ft_strcat(dest, src);
    printf("%s\n", dest);
}