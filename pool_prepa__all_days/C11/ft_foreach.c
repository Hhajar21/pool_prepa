void ft_foreach(int *tab, int length, void(*f)(int)){
    int i = 0;
    while (i < length)
    {
        f(tab[i]);
        i++;
    }
}