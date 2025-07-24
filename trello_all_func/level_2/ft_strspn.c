#include <stddef.h>
/*
Think of it like this:
You're scanning the beginning of string s:

As long as each character you see is also in accept, you keep going.

The moment you hit a character not in accept, you stop.

You return how many characters at the start of s matched.
*/
size_t  ft_strspn(const char *s, const char *accept){
    int i = 0;
    int j;
    int len=0;
    int found;
    while (s[i])
    {
        j = 0;
        found = 0;
        while (accept[j])
        {
            if(s[i] == accept[j]){
                found = 1;
                break;
            }
            j++;
        }
        if(!found)
            return len;
        len++;
        i++;
    }
    return len;
    
}
#include <stdio.h>

int main() {
    printf("%zu\n", ft_strspn("helo123", "hel"));   // → 3
    printf("%zu\n", ft_strspn("123abc", "123456"));  // → 3
    printf("%zu\n", ft_strspn("abcxyz", "abc"));     // → 3
    printf("%zu\n", ft_strspn("xyz", "abc"));        // → 0
}
