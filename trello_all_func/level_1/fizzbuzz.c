#include "unistd.h"
int main(){
    int num = 1;
    int hold;
    char n1;
    char n2;
    while (num >=1 && num <= 100)
    {
        if(num % 3 == 0 && num % 5 == 0){
            write(1, "fizzbuzz\n",10);
        }else if(num % 5 == 0){
            write(1,"buzz\n",6);
        }else if(num % 3 == 0){
            write(1, "fizz\n",6);
        }else{
           if(num >= 10){
                hold = num;
                n1 = (hold / 10) + '0';
                n2 = (hold % 10 ) + '0';
                write(1, &n1,1);
                write(1,&n2,1);
            }else{
                n1 = num + '0';
                write(1, &n1,1);
            }
            write(1, "\n",1);
        }
        num++;
    }
    
}