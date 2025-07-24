int ft_strlen(char *str){
    int i = 0;
    while(str[i])
        i++;
    return i;
}
char    *ft_strrev(char *str){
    int i = 0;
    int len = ft_strlen(str);
    char temp;
    while (i < len / 2){

            temp = str[i];
            str[i] = str[len - 1];
            str[len - 1] = temp;
        i++;
        len--;
    }
    return str;
}
#include <stdio.h>
int main(){
    char str[] = "hey hajar are you okay!!";
    char *rest = ft_strrev(str);
    printf("%s\n", rest);
}