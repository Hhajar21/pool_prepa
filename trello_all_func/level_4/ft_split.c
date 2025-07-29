#include <unistd.h>
#include <stdlib.h>
int count_word(char *str){
    int i = 0;
    int count_w = 0;
    while (str[i])
    {
       if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t'){
            if(i > 0 && (str[i - 1] != ' ' && str[i - 1] != '\n' && str[i - 1] != '\t'))
                count_w++;
       }
       i++;
    }
    if(str[i] == '\0' && (str[i - 1] != ' ' && str[i - 1] != '\n' && str[i - 1] != '\t') )
        count_w++;

    return count_w;
}
char **ft_split(char *str){
    int i = 0;
    int j = 0;
    int k = 0;
    int d = 0;
    int len_w = 0;
    int count_w = count_word(str);
    if(count_w == 0)
        return NULL;
    char **rest = malloc(sizeof(char *) * (count_w + 1));
    if(!rest)
        return NULL;
    while (str[i])
    {
        if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
            i++;
        else{
            j = i;
            while (str[i] && str[i] != '\t' && str[i] != ' ')
                i++;
            len_w = i - j;
        
            rest[d] = malloc(sizeof(char) * (len_w + 1));
            if(!rest[d])
                return NULL;
            k = 0;
            while (k < len_w)
                rest[d][k++] = str[j++];        
            d++;
        }
    }
    rest[d] = NULL;
    return rest;
}
