#include "unistd.h"
int main(int ac, char **av){
    int i = 0;
    if(ac != 2 || av[1] == ""){
        write(1, "\n",1);
    }else{
        while (av[1][i] && (av[1][i] == 32 || av[1][i] == 9))
            i++;
        while (av[1][i] != 32 && av[1][i] != 9 && av[1][i] != '\0')
            write(1, &av[1][i++],1);
        write(1, "\n",1); 
    }
}