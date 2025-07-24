int ft_count_if(char **tab, int length, int(*f)(char*)){
    int i = 0;
    int count = 0;
    int rest;
    while (i < length)
    {
        rest = f(tab[i]);
        if(rest != 0)
            count++;
        i++;
    }
    return count;
}