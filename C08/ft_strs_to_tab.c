
#include <stdlib.h>

int len(char *c){
    int i = 0;
    while (c[i]){
        i++;
    }
    return (i);
}

char *ft_strdup(char *src){
    int i = 0;
    int str_len = len(src);
    char *arr = (char *)malloc(str_len * sizeof(char) + 1);
    if(!arr)
        return NULL;
    while (src[i])
    {
        arr[i] = src[i];
        i++;
    }
    arr[i] = '\0';
    return (arr);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av){
    t_stock_str	*res;
	int			i;

	i = 0;
	res = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!res)
		return (NULL);
	while (i < ac)
	{
		res[i].size = len(av[i]);
		res[i].str = av[i];
		res[i].copy = ft_strdup(av[i]);
        if(res[i].copy == NULL)
            return NULL;
		i++;
	}
	res[i].size = 0;
	return (res);
}