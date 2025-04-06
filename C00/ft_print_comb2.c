#include "unistd.h"
void ft_print_comb2(void){
    // int a, b,c,d;
    // for (a= '0'; a <= '9'; a++)
    // {
    //     for ( b = '0'; b <= '8'; b++)
    //     {
            
    //         for ( c = a; c <= '9'; c++)
    //         {
    //            for ( d = b + 1 ; d <= '9'; d++)
    //            {
    //                 write(1,&a,1);
    //                 write(1,&b,1);
    //                 write(1," ",1);
    //                 write(1,&c,1);
    //                 write(1,&d,1);
    //                 if(!(a == '9' && b == '8' && c == '9' && d == '9')) write(1, ", ",2);
    //            }
               
    //         }
            
    //     }
        
    // }
    /** this code  above is correct but it does not handle all
     *  the cases cause we are uesing char  */
    int a,b;
   
    for(a = 0; a <= 98; a++){
        for (b = a + 1; b <= 99; b++)
        {
             char rest[5];
            rest[0] = a /  10 + '0';
            rest[1] = a %  10 + '0';
            rest[2] = ' ';
            rest[3] = b /  10 + '0';
            rest[4] = b %  10 + '0';
            write(1, rest,5);
            if(!(a == 98 && b == 99)) write(1, ", ", 2);
        }
        
    }
     write(1,"\n",1);
    
}
int main(){
    ft_print_comb2();
}