#include <unistd.h>
int main(int ac, char **av){
    int i = 0;
    int flag = 0;
    int j;
    if(ac == 2 && av[1] != NULL){
            while( av[1][i] == ' ' || av[1][i] == '\t')
                i++;
            while(av[1][i]){
                if(av[1][i] != ' ' && av[1][i] != '\t'){
                    write(1,&av[1][i],1);
                    flag = 1;
                }
                else if (flag == 1){
                    j = i + 1;
                    while (av[1][j] == ' ' || av[1][j] == '\t')
                        j++;
                    if (av[1][j] != '\0')
                        write(1, "   ", 3);

                    i = j - 1;
                    flag = 0;
                }
                i++;
            }
        write(1, "\n",1);
    }else
        write(1, "\n",1);
}