#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    while (*str)
    {
        ft_putchar(*str);
        str++;
    }
}

int ft_strcmp(char *s1, char *s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

void ft_sort_params(int argc, char **argv)
{
    int i;
    int j;
    char *temp;

    for (i = 1; i < argc - 1; i++)
    {
        for (j = i + 1; j < argc; j++)
        {
            if (ft_strcmp(argv[i], argv[j]) > 0)
            {
                temp = argv[i];
                argv[i] = argv[j];
                argv[j] = temp;
            }
        }
    }
}

int main(int argc, char **argv)
{
    int i;

    ft_sort_params(argc, argv);
    for (i = 1; i < argc; i++)
    {
        ft_putstr(argv[i]);
        ft_putchar('\n');
    }
    return (0);
}