int    ft_strlen(char *str)
{
    int    i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

int    valid_base(char *base)
{
    int    i;
    int    j;
    int    bl;

    i = 0;
    j = 0;
    bl = ft_strlen(base);
    if (base[0] == '\0' || bl == 1)
    {
        return (0);
    }
    while (base[i])
    {
        if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127)
            return (0);
        j = i + 1;
        while (j < bl)
        {
            if (base[i] == base[j])
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

int    check_base_value(char c, char *base)
{
    int    j;
    int    bl;

    j = 0;
    bl = ft_strlen(base);
    while (j < bl)
    {
        if (c == base[j])
            return (j);
        j++;
    }
    return (-1);
}

int    ft_atoi_base(char *str, char *base)
{
    int    rest;
    int    index;
    int    status;

    status = 1;
    rest = 0;
    if (valid_base(base) == 0)
        return (0);
    while (*str == 32 || (*str >= 9 && *str <= 13))
        str++;
    while (*str == '-' || *str == '+')
    {
        if (*str == '-')
            status = -1;
        str++;
    }
    while (*str)
    {
        index = check_base_value(*str, base);
        if (index == -1)
            break ;
        rest = rest * ft_strlen(base) + index;
        str++;
    }
    return (rest * status);
}