#include "unistd.h"
int main(int ac, char **av){
    int i = 0;
    int word = 1;
    if(ac == 2){
        while (av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        while (av[1][i] != '\0')
        {
            if(av[1][i] != ' ' && av[1][i] != '\t'){
                if(!word)
                    write(1, "   ",3);
                    word = 0;
                while(av[1][i] != ' ' && av[1][i] != '\t' && av[1][i] !='\0'){
                    write(1, &av[1][i],1);
                    i++;
                }
            }
            while (av[1][i] == ' ' || av[1][i] == '\t')
                i++;
        }
        
    }
    write(1, "\n", 1);
    return 0;
}