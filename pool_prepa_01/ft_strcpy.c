#include <stdio.h>
char *ft_strcpy(char *dest, char *src){
    int i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
int main(){
    char dest[10];
    char str[] = "hey hajar";
    ft_strcpy(dest, str);
    printf("%s\n", dest);
}