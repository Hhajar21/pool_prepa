int ft_strlen(char *str){
    int i = 0;
    while (str[i])
        i++;
    return i;
}
char *ft_strcat(char *dest, char *src){
    int i = 0;
    int len_dst = ft_strlen(dest);
    while (src[i])
        dest[len_dst++] = src[i++];
    dest[len_dst] = '\0';
    return dest;
}
#include <stdio.h>
int main(){
    char dest[30] = "hey hajar ";
    char src[] = "how are you";
     ft_strcat(dest, src);
    printf("%s\n", dest);
}