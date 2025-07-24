#include "unistd.h"
int check_c(char *str, char c ,int pos ){
    int i = 0;
    while(str[i]){
        if(str[i] == c && i < pos)
            return 0;
        i++;
    }
    return 1;
}
int main(int ac, char **av){
    int i = 0;
    int j;
    if(ac == 3){
        while (av[1][i])
        {
            j = 0;
            while (av[2][j])
            {
                if(av[1][i] == av[2][j]){
                    if(check_c(av[1], av[1][i], i)){
                        write(1, &av[1][i],1);
                        break;
                    }
                }
                j++;
            }
            
            i++;
        }
        
        write(1, "\n",1);
    }else
        write(1, "\n",1);
}