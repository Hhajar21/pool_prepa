#include <stdio.h>
char *ft_strncpy(char *dest, char *src, unsigned int n){
    unsigned int i = 0;
     while (i < n && src[i])
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
    ft_strncpy(dest, str, 4);
    printf("%s\n", dest);
}