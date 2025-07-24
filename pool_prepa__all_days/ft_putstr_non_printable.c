#include "unistd.h"
void ft_putstr_non_printable(char *str){
    int i = 0;
    unsigned char s;
    char arr[] = "0123456789abcdef";
    while (str[i])
    {
        s = str[i];
        if(s >= 32 && s <= 126)
            write(1, &s, 1);
        else{
            write(1, "\\", 1);
            write(1, &arr[s /16], 1);
            write(1, &arr[s % 16], 1);
        }
        i++;
    }
}
int main(){
    char str[] = "Coucou\ntu vas bien ?";
    ft_putstr_non_printable(str);
    write(1, "\n", 1);
}