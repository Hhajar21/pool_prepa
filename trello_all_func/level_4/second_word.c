#include <unistd.h>
int main(int ac, char **av){
    int i = 0;
    if(ac == 2 && av[1] != NULL){
        while(av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
            i++;
        while (av[1][i] !='\0' && av[1][i] != ' ' && av[1][i] != '\t')
            i++;
        while(av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
            i++;
        while (av[1][i] !='\0' && av[1][i] != ' ' && av[1][i] != '\t')
            write(1, &av[1][i++],1);
        write(1, "\n",1);
    }else
        write(1,"\n",1);
}