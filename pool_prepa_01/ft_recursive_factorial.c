#include <stdio.h>
int ft_recursive_factorial(int nb){
    int rest = 1;
    if(nb < 0)
        return 0;
    if(nb > 0){
       rest *= nb * ft_recursive_factorial(nb -1);
    }
    return rest;
}
#include <stdio.h>
int main(){
    printf("%d\n",ft_recursive_factorial(5));
}
