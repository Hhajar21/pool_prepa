#include "ft_rush.h"
int parse_input(char *str, int *values){
    int i = 0;
    int index = 0;
    while (str[i])
    {
        if(str[i] >= '1' && str[i] <= '4'){
            if (index >= 16) // Too many numbers
                return 0;
            values[index] = str[i] - '0';
            index++;
        }else if(str[i] != ' '){
            return 0;
        }
        i++;
    }
    if(index != 16)
        return 0;
    return 1;
}