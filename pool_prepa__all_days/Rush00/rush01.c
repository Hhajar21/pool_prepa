void ft_putchar(char c);
void err_msg(char *str){
    int i = 0;
    while(str[i]){
        ft_putchar(str[i]);
        i++;
    }
}
void check(int col,  int row, int x, int y)
{
    if (col == x-1 && row == 0 && col > 0)
        {
            ft_putchar('\\');

        }else if((col == 0 && row == 0)
            || (col == x-1 && row == y-1 && x !=1)){
            ft_putchar('/');
        }else if((col == x-1 && row == 0)
            || (col == 0 && row == y-1 )){
            ft_putchar('\\');
        }else if (col != 0 && row != 0  && row != y-1 && col != x-1){
             ft_putchar(' ');
        }else {
            ft_putchar('*');
        }
}
void rush( int x, int y){
  int row = 0;
  int col;
  if (x <= 0 && y <= 0){
    err_msg("the fuction allowed only the positive numbers!!!\n");
    
    return;
  }
  while(row < y){
    col = 0;
    while (col < x)
    {
        check(col, row, x, y);
        col++;
    }
    ft_putchar('\n');
    row++;
  }
}