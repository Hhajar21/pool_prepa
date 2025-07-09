int ft_strlen(char *str){
    int i = 0;
    while (str[i])
        i++;
    return i;
}
char *ft_strncat(char *dest, char *src, unsigned int nb){
    unsigned int i = 0;
    unsigned int len_dest = ft_strlen(dest);
    while (src[i] && i < nb)
        dest[len_dest++] = src[i++];
    dest[len_dest] = '\0';
    return dest;
}
#include <stdio.h>
int main(){
    char dest[30] = "hey hajar ";
    char src[] = "how are you";
     ft_strncat(dest, src, 3);
    printf("%s\n", dest);
}