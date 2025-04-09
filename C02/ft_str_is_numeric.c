#include <stdio.h>
int ft_str_is_numeric(char *str){
    int i = 0;
    while (str[i])
    {
        if(str[i] >= '0' && str[i] <= '9')
            i++;
        else return 0;
    }
   return 1; 
}
int main(){
 char src[20] = "heyjdlsdsnkksklh";
 char s[20] = "ndsfki11nck1 kfl111";
 char s1[20] = "1233563645768";
 printf("%d\n", ft_str_is_numeric(src));
 printf("%d\n", ft_str_is_numeric(s));
 printf("%d\n", ft_str_is_numeric(s1));
}