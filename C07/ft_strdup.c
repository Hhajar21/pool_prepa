#include <stdlib.h>
#include <stdio.h>
int ft_strlen(char *str){
    int i = 0;
    while (str[i])
        i++;
    return i;
}
char *ft_strdup(char *src){
int len_s = ft_strlen(src);
char *new_arr = malloc(len_s + 1);
int i = 0;
    if(!new_arr)
        return NULL;
    while (src[i])
    {
        new_arr[i] = src[i];
        i++;
    }
    new_arr[i] = '\0';
    return new_arr;
}
int main(){
    char src[]= "hey hajar how are u";
    char *rest;
    rest = ft_strdup(src);
    printf("%s\n", rest);
    free(rest);
}