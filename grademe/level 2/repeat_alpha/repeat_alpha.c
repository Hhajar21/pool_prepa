#include "unistd.h"
int main(int ac, char **av){
    int i = 0;
    int count;
    if(ac == 2){
        while (av[1][i])
        {
            if((av[1][i] >= 'a' && av[1][i] <= 'z')|| (av[1][i] >= 'A' && av[1][i] <= 'Z')){
                if(av[1][i] >= 'a' && av[1][i] <= 'z'){
                    count = av[1][i] - 'a' + 1; // 'a' -'a' = 0 +1 becuse if it a we should write it once 
                    // 'b' - 'a' = 1 + 1 = 2 so bb and so on.....;
                }else{
                    count = av[1][i] - 'A' + 1;
                }
                while (count > 0)
                {
                    write(1, &av[1][i],1);
                    count--;
                }
                
            }else{
                write(1, &av[1][i],1);
            }
           i++;
        }
        write(1, "\n", 1);
    }else
        write(1, "\n", 1);
    return 0;
}