#include "rush01.h"
void reverse_line(int *line, int size)
{
    int i = 0;
    int tmp;

    while (i < size / 2)
    {
        tmp = line[i];
        line[i] = line[size - 1 - i];
        line[size - 1 - i] = tmp;
        i++;
    }
}


int is_valid(int grid[4][4], int row, int col, int num, int *clues)
{
    int i = 0;
    int line[4];

    // Check same number in row
    while (i < 4)
    {
        if (grid[row][i] == num)
            return 0;
        i++;
    }

    // Check same number in column
    i = 0;
    while (i < 4)
    {
        if (grid[i][col] == num)
            return 0;
        i++;
    }

    // TEMPORARILY pretend to place it
    grid[row][col] = num;

    // Validate row clues if end of row
    if (col == 3)
    {
        i = 0;
        while (i < 4)
        {
            line[i] = grid[row][i];
            i++;
        }
        if (count_visible(line, 4) != clues[8 + row])
            return 0;
        reverse_line(line, 4);
        if (count_visible(line, 4) != clues[12 + row])
            return 0;
    }

    // Validate col clues if end of column
    if (row == 3)
    {
        i = 0;
        while (i < 4)
        {
            line[i] = grid[i][col];
            i++;
        }
        if (count_visible(line, 4) != clues[col])
            return 0;
        reverse_line(line, 4);
        if (count_visible(line, 4) != clues[4 + col])
            return 0;
    }

    return 1;
}

void print_grid(int grid[4][4])
{
    int i = 0;
    int j;
    char c;

    while (i < 4)
    {
        j = 0;
        while (j < 4)
        {
            c = grid[i][j] + '0';
            write(1, &c, 1);
            if (j != 3)
                write(1, " ", 1);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
}

int solve(int grid[4][4], int row, int col, int *clues)
{
    int next_row;
    int next_col;
    int num = 1;

    if (row == 4)
        return 1;

    if (col == 3)
    {
        next_row = row + 1;
        next_col = 0;
    }
    else
    {
        next_row = row;
        next_col = col + 1;
    }

    while (num <= 4)
    {
        if (is_valid(grid, row, col, num, clues))
        {
            grid[row][col] = num;
            if (solve(grid, next_row, next_col, clues))
                return 1;
            grid[row][col] = 0;
        }
        num++;
    }
    return 0;
}
