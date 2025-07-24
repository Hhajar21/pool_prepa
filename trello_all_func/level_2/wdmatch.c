#include <unistd.h>
int ft_strlen(char *str){
    int i = 0;
    while(str[i])
        i++;
    return i;
}
int main(int ac , char **av){
    int i = 0;
    int j = 0;
    int len;
    if(ac == 3){
        while(av[2][j] && av[1][i]){
            len = ft_strlen(av[1]);
            if(av[1][i] == av[2][j])
                i++;
            j++;
        }
        if(i == len){
            write(1, av[1], len);
        }
        write(1,"\n",1);
    }else
        write(1, "\n",1);
}