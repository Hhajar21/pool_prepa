#include <stdio.h>
#include <stdio.h>
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

char *ft_strcapitalize(char *str){
    int i = 0;
    ft_strupcase(str);
    while (str[i])
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9')){
            if(str[i + 1] >= 'A' && str[i + 1] <= 'Z')
                str[i + 1] += 32;
        }
        i++;
    }
    return str;
    
}
int main(){
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    ft_strcapitalize(str);
    printf("%s\n", str);
}