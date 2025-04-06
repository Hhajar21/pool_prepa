#include "unistd.h"
void ft_print_alphabet(void){
    
    for (int i = 'a'; i <= 'z'; i++)
    {
       write(1, &i, 1);
    }
   
}
int main(){
    ft_print_alphabet();
    write(1,"\n",1);
}