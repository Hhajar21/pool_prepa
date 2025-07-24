#include "unistd.h"
void ft_rev_int_tab(int *tab, int size){
    int first_nb = 0;
    int last_nb = size - 1;
    int tmp;
    while (first_nb < last_nb)
    {
        tmp = tab[first_nb];
        tab[first_nb] = tab[last_nb];
        tab[last_nb] = tmp;
        first_nb++;
        last_nb--;
    }
    
}
void ft_putchar(char c){
   write(1, &c, 1);
}
int main(){
    int tab[6] = {0,1,2,3,4,5};
    int i =0;
    ft_rev_int_tab(tab, 6);
    write(1, "The rev tab is : ", 17);
    while (i <= 6)
    {
        ft_putchar( tab[i] + '0');
        i++;
    }
    write(1, "\n", 1);
}