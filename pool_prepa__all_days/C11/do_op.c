   /*#include "header.h"
   int main(int ac, char **av){
      int rest;
      if(ac == 4){
         //printf("%s\n", av[2]);
         if(av[2][0] == '+'){
            rest = atoi(av[1]) + atoi(av[3]); 
            printf("%d", rest);
         }else if(av[2][0] == '-'){
            rest = atoi(av[1]) - atoi(av[3]); 
            printf("%d", rest);
         }else if(av[2][0] == '/'){
            rest = atoi(av[1]) / atoi(av[3]); 
            printf("%d", rest);
         }else if(av[2][0] == '*'){

            rest = atoi(av[1]) * atoi(av[3]);
            printf("%d", rest);
         }else{
               rest = atoi(av[1]) % atoi(av[3]); 
            printf("%d", rest);
         }
      }
      printf("\n");
      return 0;
   }*/
   #include <unistd.h>
   int add(int a, int b){
      return a+b;
   }
   int sub(int a, int b){
      return a-b;
   }
   int mul(int a, int b) {
      return a * b; 
   }
   int divide(int a, int b) {
      return a / b; 
   }
   int mod(int a, int b) { 
      return a % b; 
   }
   void ft_putnbr(int nb){
      int long long nbr = nb;
      int i = 0;
      char rest[200];
      if(nbr < 0){
         write(1, "-", 1);
         nbr *= -1;
      }
      while (nbr >= 10)
      {
         rest[i++] = nbr % 10 + '0' ;
         nbr /=  10;
      }
      if (nbr <= 9)
         rest[i] = nbr + '0';
      while (i >= 0)
      {
         write(1, &rest[i], 1);
         i--;
      }
   }
   int ft_atoi(char *str){
      int  i = 0;
      int signe = 1;
      int count_signe = 0;
      int rest = 0;
      while (str[i] == 32 || (str[i] == '\t' && str[i] == '\r'))
         i++;
      if(str[i] == '-' || str[i] == '+'){
         if(str[i] == '-')
            signe *= -1;
         //count_signe ++;
         i++;
      }
      /*if(count_signe > 1)
         return 0;*/
      while (str[i] >= '0' && str[i] <= '9')
      {
         rest = rest * 10 + (str[i] - '0');
         i++;
      }
      return rest * signe;
      
   }
   int main(int ac, char **av){
      int (*ops[5])(int, int) = {add, sub, mul, divide, mod};
      char operator;
      int a, b, rest, indx = - 1;
      if(ac != 4){
         write(1, "\n", 1);
         return 0;
      }
      operator = av[2][0];
      if(operator == '+') 
         indx = 0;
      if(operator == '-') 
         indx = 1;
      if(operator == '*')
         indx = 2;
      if(operator == '/')
         indx = 3;
      if(operator == '%')
         indx = 4;
      if(indx == -1 || av[2][1] != '\0'){
         ft_putnbr(0);
         write(1, "\n", 1);
         return 0;
      }
      a = ft_atoi(av[1]);
      b = ft_atoi(av[3]);

      if(operator == '/' && b == 0)
         write(1, "Stop : division by zero\n", 24);
      else if(operator == '%' && b == 0)
         write(1, "Stop : modulo by zero\n", 22);
      else{
         rest = ops[indx](a,b);
         ft_putnbr(rest);
         write(1, "\n", 1);
      }
      return 0;
   }