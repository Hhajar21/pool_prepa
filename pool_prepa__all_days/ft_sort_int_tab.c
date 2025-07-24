#include "unistd.h"
void ft_sort_int_tab(int *tab, int size){
    int tmp , i;
    while (size >= 0)
    {
        i = 0;
        while (i < size -1)
        {
            if(tab[i] > tab[i + 1]){
    
                tmp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = tmp;
            }
            i++;
        }
        size--;
    }
}
void ft_putchar(char c){
    write(1,&c,1);
}
int main(){
    int teb[7] = {7,2,6,4,1,3,5};
    ft_sort_int_tab(teb, 7);
    write(1, "The sort tab is : ", 18);
    for (int i = 0; i < 7; i++)
    {
        ft_putchar( teb[i] + '0');
    }
    write(1,"\n",1);
} 