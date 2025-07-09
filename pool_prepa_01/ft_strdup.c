#include <stdlib.h>
#include <stdio.h>
int ft_strlen(char *str){
    int i = 0;
    while (str[i])
        i++;
    return i;
}
char *ft_strdup(char *src){
    int i = 0;
    int lent = ft_strlen(src);
    char *arr = malloc(sizeof(char) * (lent + 1));
    if(!arr)
        return NULL;
    while (src[i])
    {
        arr[i] = src[i];
        i++;
    }
    arr[i] = '\0';
    return arr;
}
int main(){
    char src[]= "hey hajar how are u";
    char *rest;
    rest = ft_strdup(src);
    printf("%s\n", rest);
    free(rest);
}