#include "unistd.h"
// in that case we should know thta 'a' = 98 in ascii and 'z' = 122
// if did this :
// rest = 'z' - (c - 'a');
// rest = 'z' - ('a' - 'a')
// rest = 'z' - 0;
//rest = 'z' 
//so will do it for all the alpha
int main(int ac, char **av){
    int i = 0;
    char c;
    char rest;
    if(ac == 2){
        while (av[1][i])
        {
            c = av[1][i];
            if(c >= 'a' && c <= 'z'){
               rest = 'z' - (c - 'a');
               write(1, &rest, 1);
            }else if(c >= 'A' && c <= 'Z'){
                rest = 'Z' - (c - 'A');
                write(1, &rest, 1);
            }else
                write(1, &c, 1);
            i++;
        }
        
        write(1, "\n",1);
    }else
        write(1, "\n", 1);
}