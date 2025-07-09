#include "unistd.h"
int ft_strlen(char *str){
    int i = 0;
    while (str[i])
        i++;
    return i;
}
char    *ft_strrev(char *str){
    int i = 0;
    int len_s = ft_strlen(str) - 1;
    char tmp;
    while (len_s > i)
    {
      tmp = str[i];
      str[i] = str[len_s];
      str[len_s] = tmp;
      i++;
      len_s--;
    }
    
    return str;
}