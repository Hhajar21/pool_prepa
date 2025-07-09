int ft_any(char **tab, int(*f)(char*)){
    int i = 0;
    int rest;
    while (tab[i])
    {
        rest = f(tab[i]);
        if(rest != 0)
            return 1;
        i++;
    }
    return 0;
}