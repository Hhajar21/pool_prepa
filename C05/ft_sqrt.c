int ft_sqrt(int nb)
{
    int i;

    if (nb < 0)
        return (0);
    i = 0;
    while (i * i <= nb && i <= 46340) // 46340 is the square root of INT_MAX
    {
        if (i * i == nb)
            return (i);
        i++;
    }
    return (0);
}