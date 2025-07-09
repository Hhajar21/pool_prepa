#include <stddef.h>
#include <stdio.h>
void    *ft_memset(void *b, int c, size_t len){
   
    unsigned char *str = (unsigned char *)b;

    size_t i = 0;
    while (len > 0)
    {
        str[i] = c;
        i++ ;
        len--;
    }
    return b;
}

 int main(){
    
     int i = 5;
     //int c = 1337;
    /*has two byte ox39 = 57 ox05 = 5 
    so we need to set it byte by byte 
     Cast i to unsigned char* to manipulate byte by byte*/
    unsigned char *p = (unsigned char *)&i;
    ft_memset(p, 57, 1);
    ft_memset(p + 1, 5 , 1);
   printf("%d\n", i );
    
}
