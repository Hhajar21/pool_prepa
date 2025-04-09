#include <stdio.h>
char *ft_strncpy(char *dest, char *src, unsigned int n){
 unsigned int i = 0;
while (src[i] && i <= n)
{
    
        dest[i] = src[i];
        i++;
    
}
dest[i] = '\0';
}

int main(){
    char dest[10];
    char src[] = "hello hajar";
    unsigned int n = 5;
    ft_strncpy(dest,src, n);
   printf("the dest : %s\n", dest) ;
}