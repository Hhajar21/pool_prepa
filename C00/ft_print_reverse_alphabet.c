#include "unistd.h"
void ft_print_reverse_alphabet(void){
    for (int i = 'z'; i >= 'a'; i--)
    {
       write(1, &i, 1);
    }
    write(1,"\n",1);
}
int main(){
    ft_print_reverse_alphabet();
}