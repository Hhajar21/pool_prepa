#include "unistd.h"
void ft_print_numbers(void){
    for (int i = '0'; i <= '9'; i++)
    {
       write(1, &i, 1);
    }
    write(1,"\n",1);
}
int main(){
    ft_print_numbers();
}