#include <stdlib.h>
#include <stdio.h>
int ft_strlen(char *str){
    int i = 0;
    while (str[i])
        i++;
    return i;
}

char *ft_strcat(char *dest, char *src){
    int i = 0;
    int len_dst = ft_strlen(dest);
    while (src[i])
        dest[len_dst++] = src[i++];
    dest[len_dst] = '\0';
    return dest;
}
char *ft_strjoin(int size, char **strs, char *sep){
    int i = 0;
    int j = 0;
    int count_len_str = 0;
    int count_sep = ft_strlen(sep);
    int tot_len;
    char *rest;
    while (i < size)
        count_len_str += ft_strlen(strs[i++]);
    tot_len = count_len_str + (count_sep * (size - 1)) + 1;
    if(size == 0){
        rest = malloc(sizeof(char));
        if (!rest) 
            return NULL;
        rest[0] = '\0';
        return rest;
    }
    rest = malloc(sizeof(char) * tot_len);
    if(!rest)
        return NULL;
    rest[0] = '\0';
    while (j < size){
        ft_strcat(rest, strs[j]);
        if(j < size - 1)
            ft_strcat(rest, sep);
        j++;
    }
    return rest;
    
}
int main(){
    char *str[] = {"hey", "zizo","did you","miss me??"};
    char *sep = "~!";
    char *rest = ft_strjoin(4, str, sep);
    if(rest){
        printf("%s\n", rest);
        free(rest);
    }else  
        printf("there is no allocation here !!...\n");
    return 0;
}