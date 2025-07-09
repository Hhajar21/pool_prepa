#include "ft.h"
int ft_strcmp(char *s1, char *s2){
    int i = 0;
    int rest;
    while (s1[i] == s2[i] && s1[i])
        i++;
    rest = s1[i] - s2[i];
    return rest;
}