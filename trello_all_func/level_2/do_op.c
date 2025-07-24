#include "unistd.h"
#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av){
    int i = 0;
    int rest;
    if(ac == 4){
        if(av[2][0] == '+'){
            rest = atoi(av[1]) + atoi(av[3]);
            printf("%d\n", rest);
        }else if(av[2][0] == '-'){
            rest = atoi(av[1]) - atoi(av[3]);
            printf("%d\n", rest);
        }else if(av[2][0] == '/'){
            rest = atoi(av[1]) / atoi(av[3]);
            printf("%d\n", rest);
        }else if(av[2][0] == '%'){
            rest = atoi(av[1]) % atoi(av[3]);
            printf("%d\n", rest);
        }else{
            rest = atoi(av[1]) * atoi(av[3]);
            printf("%d\n", rest);
        }
    }else
        write(1, "\n",1);
}