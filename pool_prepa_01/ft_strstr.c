char *ft_strstr(char *str, char *to_find){
    int i = 0, j = 0;
    if(to_find[i] == '\0')
        return str;
   while (str[i])
   {
        while (str[i + j] == to_find[j] && str[ i + j] != '\0')
            j++;
        if (to_find[j] == '\0')
            return (str + i);
        i++;
        j=0;  
   }
   return 0;
}
#include <stdio.h>
int main(){
     char *haystack = "Hello, hajar how  are u!";
     char *needle = "are";

    char *result = ft_strstr(haystack, needle);
    printf("%s\n", result);
}