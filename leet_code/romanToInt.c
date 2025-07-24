#include <stddef.h>
int ft_strlen(char *str){
    int lent = 0;
    while (str[lent])
        lent++;
    return lent;
}
int ft_strncmp(const char *s1, const char *s2, size_t n){
    size_t i = 0;
    while (i < n && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        i++;
    if (i == n)
        return 0;
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}


int romanToInt(char* s) {
    int values[] =    {1000, 900, 500, 400, 100, 90,  50,  40,  10,  9,   5,  4,  1};
    char *symbols[] = {"M",  "CM","D", "CD", "C", "XC","L", "XL","X", "IX","V","IV","I"};
    int i = 0;
    int rest = 0;
    int len;
    while (*s)
    {
        while (i < 13)
        {
            len = ft_strlen(symbols[i]);
            if(ft_strncmp(s, symbols[i], len) == 0){
                rest += values[i];
                s += len;
                break;
            }
            i++;
        }
        
    }
    
    return rest;
}
#include <stdio.h>
int main(){
    printf("%d\n", romanToInt("III"));
    printf("%d\n",romanToInt("LVIII"));
    printf("%d\n",romanToInt("MCMXCIV"));
}
