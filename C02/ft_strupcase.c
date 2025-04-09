char *ft_strupcase(char *str){
    int i = 0;
    while (str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i++;
    }
   return str; 
}
#include <stdio.h>
int main(){
    char str[]="hey hajar cv";
    ft_strupcase(str);
    printf("%s\n", str);
}