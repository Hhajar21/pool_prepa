#include <unistd.h>
void	ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

int main(int ac, char **av){
    int i = 1;
    

    if (ac >= 2){
        while (i < ac)
        {
            ft_putstr(av[i]);
            write(1, "\n", 1);
            i++;
        }
    }
    return 0;
}
