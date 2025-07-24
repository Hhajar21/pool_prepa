#include "ft_strs_to_tab.h"
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
struct s_stock_str *ft_strs_to_tab(int ac, char **av){
    t_stock_str *rest 
    int i = 0;
    rest = (t_stock_str)malloc(sizeof(char) * (ac + 1));
    if(!rest)
        return NULL;
    while (i < ac)
    {
       rest[i].size = ft_strlen(av[i]);
       rest[i].str = av[i];
       rest[i].copy = ft_strdup(av[i]);
       if(rest[i]->copy == NULL)
            return NULL;
        i++;
    }
    rest[i].size = 0;
    return rest;
}