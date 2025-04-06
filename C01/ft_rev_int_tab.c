#include "unistd.h"
void ft_rev_int_tab(int *tab, int size){
    int first = 0;
    int last = size -1;
    int temp;
while (first < last)
{
    temp = tab[first];
    tab[first] = tab[last];
    tab[last] = temp;
    first++;
    last--;
}

}
void ft_putchar(char c){
    write(1,&c,1);
}
int main(){
    int teb[7] = {1,2,3,4,5,6,7};
    ft_rev_int_tab(teb, 7);
    for (int i = 0; i < 7; i++)
    {
        ft_putchar( teb[i] + '0');
    }
    write(1,"\n",1);
}