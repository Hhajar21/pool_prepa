#include <stdlib.h>
#include <stdio.h>

int check_characters_in_sep(char *sep, char c){
    int i = 0;
    while (sep[i])
    {
        if(c == sep[i])
            return 1;
        i++;
    }
    return 0;
}
int count_words(char *str, char *charset){
    int i = 0;
    int count_w = 0;
    int sep_in_word = 0;
    while (str[i])
    {
        if(check_characters_in_sep(charset, str[i])){
            if (sep_in_word)
            {
               count_w++;
               sep_in_word = 0;
            }
        }else  
            sep_in_word = 1;
        i++;
    }
    if(sep_in_word)
        count_w++;
    return count_w;
}
char *stor_word_in_arr(char *str, int start, int end){
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
char **ft_split(char *str, char *charset){
    int j =  0;
    int i = 0;
    int start = 0;
    int cw = count_words(str, charset);
    char **rest = malloc(sizeof(char *) * (cw + 1));
    if(!rest)
        return NULL;
    while (str[i])
    {
        if(!check_characters_in_sep(charset, str[i])){
            start = i;
            while (str[i] && !check_characters_in_sep(charset, str[i]))
                i++;
            rest[j] = stor_word_in_arr(str, start, i);
            if(!rest[j])
                return NULL;
            j++;
        }else
            i++;
        
    }
    rest[j] = NULL;
    return rest;
    
}

int main(){
    printf("%d\n", count_words("hey hajar cv", " "));
    printf("%s\n", stor_word_in_arr("hey hajar cv",4, 9));
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