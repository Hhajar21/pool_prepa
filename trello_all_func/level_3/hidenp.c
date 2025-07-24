#include <unistd.h>
int ft_strlen(char *str){
    int i = 0;
    while(str[i])
        i++;
    return i;
}
int main(int ac, char **av){
    int i = 0;
    int j = 0;
    int len;
    if(ac == 3){
        len = ft_strlen(av[1]);
        while (av[1][i] && av[2][j])
        {
            if(av[1][i] == av[2][j])
                i++;
            j++;
        }
        if(i == len)
            write(1, "1",1);
        else
            write(1, "0",1);
        write(1, "\n",1);
    }else
        write(1, "\n",1);
}