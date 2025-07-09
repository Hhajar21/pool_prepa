int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
    int i = 0;
    int ascending = 1;
    int descending = 1;

    while (i < length - 1)
    {
        int cmp = f(tab[i], tab[i + 1]);

        if (cmp < 0)
            descending = 0; // if it increases, it's not descending
        else if (cmp > 0)
            ascending = 0; // if it decreases, it's not ascending

        if (!ascending && !descending)
            return 0; // not sorted
        i++;
    }
    return 1; // sorted (either ascending or descending)
}
