#include "unistd.h"
int ft_strlen(char *str){
    int i = 0;
    while (str[i])
        i++;
    return i;
}
int main(){
   int len = ft_strlen("hajar");
   char rest = len + '0';
   write (1, &rest ,1);
   write(1,"\n",1);
}