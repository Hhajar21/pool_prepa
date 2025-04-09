#include <stdio.h>
int ft_str_is_alpha(char *str){
    int i = 0;
    while (str[i])
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            i++;
        else return 0;
    }
   return 1; 
}
int main(){
 char src[20] = "heyjdlsdsnkksklh";
 char s[20] = "ndsfki11nck1 kfl111";
 printf("%d\n", ft_str_is_alpha(src));
 printf("%d\n", ft_str_is_alpha(s));
}