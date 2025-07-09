#include <unistd.h>

int is_valid_base(const char *base)
{
    int i, j;

    i = 0;
    while (base[i])
    {
        if (base[i] == '+' || base[i] == '-' || base[i] <= ' ' || base[i] > '~')
            return (0);
        j = i + 1;
        while (base[j])
        {
            if (base[i] == base[j])
                return (0);
            j++;
        }
        i++;
    }
    return (i >= 2);
}

int get_base_value(char c, const char *base)
{
    int i = 0;

    while (base[i])
    {
        if (base[i] == c)
            return (i);
        i++;
    }
    return (-1);
}

int ft_atoi_base(const char *str, const char *base)
{
    int sign = 1;
    int result = 0;
    int base_len;

    if (!is_valid_base(base))
        return (0);
    base_len = 0;
    while (base[base_len])
        base_len++;
    while (*str <= ' ' && *str)
        str++;
    while (*str == '+' || *str == '-')
    {
        if (*str == '-')
            sign *= -1;
        str++;
    }
    while (*str)
    {
        int value = get_base_value(*str, base);
        if (value == -1)
            break;
        result = result * base_len + value;
        str++;
    }
    return (result * sign);
}
