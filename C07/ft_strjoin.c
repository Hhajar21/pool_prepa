#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str){
    int i = 0;
    while (str[i])
        i++;
    return i;
}
char *ft_strcat(char *dest, char *src){
    int dest_len = ft_strlen(dest);
    int i = 0;
    while (src[i])
       dest[dest_len++] = src[i++];
    dest[dest_len] = '\0';
    return dest;
}
int ft_return_total_lenght(int size, char **str, char *sep){
    int i = 0;
    int tot_len = 0;
    while (i < size)
    {
        tot_len += ft_strlen(str[i]);
        if(i < size - 1)
            tot_len += ft_strlen(sep);
        i++;
    }
    return tot_len;
}
char *ft_strjoin(int size, char **strs, char *sep){
    int i = 0;
    int tot_len = ft_return_total_lenght(size, strs, sep) + 1;
    char *rest = malloc(tot_len);
    if(!rest)
        return NULL;
    if(size < 0)
        return NULL;
    rest[0] = '\0';
    while(i < size){
        ft_strcat(rest, strs[i]);
        if(i < size -1)
            ft_strcat(rest, sep);
        i++;
    }
    return rest;
}
int main(){
    char *str[] = {"hey", "zizo","did","miss me"};
    char *sep = "~!";
    char *rest = ft_strjoin(4, str, sep);
    if(rest){
        printf("%s\n", rest);
        free(rest);
    }else  
        printf("there is no allocation here !!...\n");
    return 0;
}