#include <stdio.h>
#include <stdlib.h>

int ft_check_in(char *sep, char c){
    int i= 0;
    while (sep[i])
    {
        if(c == sep[i])
            return 1;
        i++;
    }
    return 0;
}
 int ft_count_word(char *str, char *charset){
    int i = 0;
    int count = 0;
    int inw = 0;
     while (str[i])
     {
        if(ft_check_in(charset, str[i])){
            if(inw){
                count++;
                inw = 0;
            }
        }else
            inw = 1;
        i++;  
    }
    if(inw)
        count++;
    return count;
 }
 char *ft_find_word(char *str, int start, int end){
    int i = 0;
    int len_w = end - start;
    char *word = malloc(sizeof(char) * (len_w + 1));
    if(!word)
        return NULL;
    while (start < end )
        word[i++] = str[start++];
    word[i] = '\0';
    return word;
 }
 
 void ft_split_word(char *str, char *charset, char **result){
    int i = 0;
    int j = 0;
    int start = 0;
    while (str[i])
    {
        if(!ft_check_in(charset, str[i])){
            start = i;
            while (str[i] && !ft_check_in(charset, str[i]))
                i++;
            result[j]= ft_find_word(str, start, i);
            if(!result[j])
                return;
            j++;
        }else   
            i++;
    }
    result[j] = NULL;
 }
 char **ft_split(char *str, char *charset){
    int cw = ft_count_word(str, charset);
    char **final_arr = malloc(sizeof(char *) * (cw + 1));
    if(!final_arr)
        return NULL;
    ft_split_word(str , charset, final_arr);
    return final_arr;
 }

int main() {
    char **rest = ft_split("  hey \nhajar how", " \t\n");
    int i = 0;

    if (rest == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    while (rest[i]) {
        printf("%s\n", rest[i]);
        free(rest[i]);
        i++;
    }
    free(rest);

    return 0;
}