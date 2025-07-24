#include "unistd.h"
void ft_print_comb2(void){
    int a = 0;
    int b;
    while (a <= 98)
    { 
        b = a + 1;
        while (b <= 99)
        {
            char rest [5];
            rest[0] = a / 10 + '0';
            rest[1] = a % 10 + '0';
            rest[2] = ' ';
            rest[3] = b / 10 + '0';
            rest[4] = b % 10 + '0';
            write(1, rest, 5);
            if(!(a == 98 && b == 99))
                write(1, ", ", 2);
            b++;
        }
        
        a++;
    }
    
    write(1, "\n", 1);
}
int main(){
    ft_print_comb2();
}