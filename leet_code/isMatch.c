#include <stdbool.h>
/*
If the next character is *, you have two options:

Skip the character + * entirely.

If the current characters match, keep trying to match more of s.

If there's no *, match the current character and continue.
*/
bool isMatch(char* s, char* p){
    if(s[0] == '\0' && p[0] == '\0' )
        return 1;
    if(s[0] != '\0' && p[0] == '\0')
        return 0;
    int match = 0;
    if(s[0] != '\0' && (s[0] == p[0] || p[0] == '.'))
        match = 1;
    else
        match = 0;
    if(*(p + 1) == '*')
        return (isMatch(s, p + 2)) || (match && isMatch(s + 1, p));
    else
        return match && isMatch(s + 1, p + 1);
}

#include <stdio.h>
int main(){
    printf("%d\n", isMatch("aa", "a"));
    printf("%d\n", isMatch("aa", "a*"));
    printf("%d\n", isMatch("ab", ".*"));
    printf("%d\n", isMatch("mississippi", "mis*is*p*."));
}