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

void ft_sort_params(int ac, char **av)
{
    int i;
    int j;
    char *temp;
    i =  1;
    j =  i + 1;
    while (i < ac -1)
    {
        while (j < ac)
        {
            if(ft_strcmp(av[i], av[j]) > 0){

                temp = av[i];
                av[i] = av[j];
                av[j] = temp;
            }
            j++;
        }
        i++;
    }
    
}
 int main(int ac, char **av){
    int i = 1;
    ft_sort_params(ac, av);
    while (i < ac)
    {
        ft_putstr(av[i]);
        ft_putchar('\n')
    }
    
 }