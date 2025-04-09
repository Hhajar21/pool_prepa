#include "unistd.h"
void ft_putstr_non_printable(char *str){
    int i = 0;
    unsigned char str_charcter;
    char *arr = "0123456789abcdef";
    while (str[i])
    {
       str_charcter = str[i];
       if(str_charcter >= 32 && str_charcter <= 126)
            write(1, &str_charcter, 1);
        else{
            write(1, "\\", 1);
            write(1, &arr[str_charcter / 16],1);
            write(1, &arr[str_charcter % 16], 1);
        }
        i++;
    }
    
}
int main(){
    char str[] = "Coucou\ttu vas bien ?";
    ft_putstr_non_printable(str);
    write(1, "\n", 1);
}