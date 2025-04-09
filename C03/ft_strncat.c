int ft_strlen(char *str){
    int i = 0;
    while (str[i])
        i++;
    return i;
}
char *ft_strncat(char *dest, char *src, unsigned int nb){
    int dest_len = ft_strlen(dest);
    unsigned int i = 0;
    while (src[i] && i <= nb)
       dest[dest_len++] = src[i++];
    dest[dest_len] = '\0';
    return dest;
}
#include <stdio.h>
int main(){
    char dest[30] = "hey hajar ";
    char src[] = "how are you";
     ft_strncat(dest, src, 4);
    printf("%s\n", dest);
}