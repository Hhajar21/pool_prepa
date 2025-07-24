#include "rush01.h"

int main(int ac, char **av)
{
    int clues[16];
    int grid[4][4];
    int i = 0;
    int j;

    
        if (!parse_input(av[1], clues))
        {
            write(1, "Error\n", 6);
            return 1;
        }

        while (i < 4)
        {
            j = 0;
            while (j < 4)
            {
                grid[i][j] = 0;
                j++;
            }
            i++;
        }

        if (solve(grid, 0, 0, clues))
            print_grid(grid);
        else
            write(1, "Error\n", 6);
        return 1;
    return 0;
}
