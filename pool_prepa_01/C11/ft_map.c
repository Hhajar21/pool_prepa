#include <stdlib.h>
int *ft_map(int *tab, int length, int(*f)(int)){
    int i = 0;
    int *rest = malloc(sizeof(int) * length);
    if(!rest)
        return 0;
    while (i < length )
    {
        rest[i] = f(tab[i]);
        i++;
    }
    return rest;
}