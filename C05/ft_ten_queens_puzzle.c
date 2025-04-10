#include <stdio.h>

#define SIZE 10

int is_safe(int board[SIZE], int row, int col) {
    for (int i = 0; i < row; i++) {
        if (board[i] == col || board[i] - i == col - row || board[i] + i == col + row) {
            return 0;
        }
    }
    return 1;
}

void solve(int board[SIZE], int row, int *count) {
    if (row == SIZE) {
        (*count)++;
        for (int i = 0; i < SIZE; i++) {
            printf("%d ", board[i]);
        }
        printf("\n");
        return;
    }
    for (int col = 0; col < SIZE; col++) {
        if (is_safe(board, row, col)) {
            board[row] = col;
            solve(board, row + 1, count);
        }
    }
}

int ft_ten_queens_puzzle(void) {
    int board[SIZE] = {0};
    int count = 0;
    solve(board, 0, &count);
    return count;
}

int main(void) {
    int solutions = ft_ten_queens_puzzle();
    printf("Total solutions: %d\n", solutions);
    return 0;
}