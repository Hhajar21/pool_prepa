#include <stddef.h>
size_t	ft_strcspn(const char *s, const char *reject){
    int i = 0;
    int j;
    int  count_c = 0;
    while (s[i])
    {
        j = 0;
        while(reject[j]){
            if(s[i] == reject[j])
                return count_c;
            j++;
        }
        count_c++;
        i++;
    }
    return count_c;
}
#include <stdio.h>
int main(){
    printf("%zu\n", ft_strcspn("hello world", "o"));

}