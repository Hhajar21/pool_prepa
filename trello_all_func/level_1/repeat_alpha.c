#include "unistd.h"
int main(int ac, char **av){
    int i = 0;
    int index = 0;
    char c;
    if(ac == 2){
        while (av[1][i])
        {   c = av[1][i];
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
                if(c >= 'a' && c <= 'z')
                    index = c - 'a' + 1;
                else
                    index = c - 'A' + 1;
                while (index > 0)
                {
                    write(1, &c, 1);
                    index--;
                }
            }
            i++;
        }
        write(1, "\n",1);
    }else{
        write(1, "\n",1);
    }
}