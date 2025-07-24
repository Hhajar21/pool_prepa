#include "rush01.h"
int parse_input(char *str, int *clues)
{
    int i = 0;
    int idx = 0;

    while (!str[i])
    {
        if (str[i] >= '1' && str[i] <= '4')
            clues[idx++] = str[i] - '0';
        else if (str[i] != ' ')
            return 0;  // Invalid char
        i++;
    }
    if (idx != 16)
        return 0;
    return 1;
}


/*
*/
int count_visible(int *line, int size)
{
    int max_height = 0;
    int visible_count = 0;
    int i = 0;

    while (i < size)
    {
        if (line[i] > max_height)
        {
            max_height = line[i];
            visible_count++;
        }
        i++;
    }
    return visible_count;
}
