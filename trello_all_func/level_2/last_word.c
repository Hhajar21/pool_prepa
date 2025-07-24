#include "unistd.h"
int ft_strlen(char *str){
    int i = 0;
    while(str[i])
        i++;
    return i;
}
int main(int ac, char **av){

    int len = ft_strlen(av[1]) - 1;
    int word_end;
    if (ac == 2){
        //printf("the av len is : %d\n",len);
        while (len >= 0 && (av[1][len] == ' ' || av[1][len] == '\t'))
            len--;
        word_end = len;
        while (len >= 0 && av[1][len] != ' ' && av[1][len] != '\t')
            len--;
        len++;
        while (len <= word_end)
        {
            write(1, &av[1][len],1);
            len++;
        }
        
        write(1, "\n", 1);
    }else
        write(1, "\n",1);
}