#include <stdlib.h>
#include <stdio.h>
/*
- If there are no strings, return "".
- Loop through each character in the first string.
    - For each character, loop through the rest of the strings.
        - If index is out of bounds or character does not match, stop.
- Once a mismatch is found or end is reached,
    - Allocate a new string for the prefix.
    - Copy characters from 0 to j.
    - Add null terminator.
    - Return the new string.

*/
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
char *ft_strncpy(char *dest, char *src, unsigned int n){
    unsigned int i = 0;
     while (i < n && src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
       
}

char* longestCommonPrefix(char** strs, int strsSize) {
    int i;
    int j = 0;
    char c;
    char *prefix;
    if(strsSize == 0)
        return ft_strdup("");
    while (strs[0][j])
    {
        c = strs[0][j];
        i = 1;
        while(i < strsSize){
            if(strs[i][j] != c || strs[i][j] == '\0'){

                prefix = malloc(sizeof(char) * (j + 1));
                ft_strncpy(prefix, strs[0], j);
                prefix[j] = '\0';
                return prefix;
            }
            i++;
        }
        if(c == '\0')
            break;
        j++;
    }
    return ft_strdup(strs[0]);
}
int main(){
    char *str[] = {"flower","flow","flight"};
    char *str_1[] = {"dog","racecar","car"};
    printf("%s\n", longestCommonPrefix(str, 3));
    printf("%s\n", longestCommonPrefix(str_1, 3));
}