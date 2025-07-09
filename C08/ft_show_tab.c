#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"
int ft_strlen(char *str){
	int i = 0;
	while (str[i])
		i++;
	return i;
}
char *ft_strdup(char *src){
int len_s = ft_strlen(src);
char *new_arr = malloc(len_s + 1);
int i = 0;
	if(!new_arr)
		return NULL;
	while (src[i])
	{
		new_arr[i] = src[i];
		i++;
	}
	new_arr[i] = '\0';
	return new_arr;
}
struct s_stock_str *ft_strs_to_tab(int ac, char **av){
	t_stock_str *rest;
	int i = 0;
	rest = (t_stock_str)malloc(sizeof(t_stock_str) * ac + 1);
	if(!rest)
		return NULL;
	while (i < ac)
	{
		rest[i].str = av[i];
		rest[i].size = ft_strlen(av[i]);
		rest[i].copy = ft_strdup(av[i]);
		if(res[i].copy == NULL)
			return NULL;
		i++;
	}
	rest[i].size = 0;
	return rest;
}