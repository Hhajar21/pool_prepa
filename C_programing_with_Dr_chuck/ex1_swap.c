#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
int len(char *str){
    int i = 0;
    while (str[i] != '\0')
    {
       i++;
    }
    
    return i;
}
char *swap_ex(char *str){
    int lent = len(str);
    int i = 0;
    int temp ;
    while (str[i] != lent/2)
    {
       temp = str[i];
       str[i] = str[lent-1];
       str[lent-1] = temp;
       i++;
       lent--;
    }
    return str;
}
int main(){
    
    printf("the rest is : %s\n", swap_ex("hello"));
}