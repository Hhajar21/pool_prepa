#include <stdio.h>
#include <stdlib.h>

int ft_count_words(char *str){
    int i = 0;
    int count = 0;
    while (str[i])
    {
        if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t'){
            if(i > 0 && str[i - 1] != ' ' && str[i - 1] != '\t' && str[i - 1] != '\n')
                count++;
        }
        i++;
        if(str[i] == 0 && str[i - 1] != ' ' && str[i - 1] != '\t' && str[i - 1] != '\n')
            count++;
    }
    return count;
}
char *ft_find_word(char *str, int start, int end){
    int i = 0;
    int len_w = end - start;
    char *word = malloc(sizeof(char) * (len_w + 1));
    if(!word)
        return NULL;
    while (start < end)
        word[i++] = str[start++];
    word[i] = '\0';
    return word;
}
void ft_split_words(char *str, char **result){
    int i = 0;
    int j = 0;
    int start = 0;
    while (str[i])
    {
        if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
            i++;
        else{
            start = i;
            while (str[i] &&str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
                i++;
            result[j] = ft_find_word(str, start, i);
            if(!result[j])
                return;
            j++;
        }
    }
    result[j] = NULL;
}
char    **ft_split(char *str){
    int cw = ft_count_words(str);
    char **final_rest = malloc(sizeof(char *) * (cw + 1));
    if(!final_rest)
        return NULL;
    ft_split_words(str, final_rest);
    return final_rest;
}
int main(){
    char **arr = ft_split("hey hajar \t how are u");
    int i = 0;
   while (arr[i])
   {
        printf("%s\n", arr[i]);
        free(arr[i]);
        i++;
   }
   free(arr);
   return 0;
}