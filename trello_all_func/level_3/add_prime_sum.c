#include <unistd.h>
#include <stdlib.h>
int ft_atoi(char *str){
    int i = 0;
    int signe = 1;
    int rest = 0;
    while(str[i] == ' ' || str[i] == '\t')
        i++;
    if(str[i] == '-' || str[i] == '+'){
        if(str[i] == '-')
            signe *= -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9'){
        rest = rest * 10 + (str[i] - '0');
        i++;
    }
    return (rest * signe);
}
int ft_is_prime(int num){
    int i;
    if(num <= 1)
        return 0;
    i = 2;
    while(i <= num / i){
        if (num % i == 0)
            return 0;
        i++; 
    }
    return 1;
}
void ft_putnbr(int x){
    long long int nb = x;
    int i = 0;
    char rest[200];
    if(nb < 0){
        write(1, "-",1);
        nb *= -1;
    }
    while (nb != 0){
        rest[i++] = nb % 10 + '0';
        nb /= 10;
    }
    i--;
    while(i >= 0){
        write(1, &rest[i],1);
        i--;
    }
}
int main(int ac, char **av){
    int i = 2;
    int num;
    int rest = 0;
    if(ac == 2){
        num = ft_atoi(av[1]);
        if(num <= 1){
            write(1, "0\n", 2);
            exit(0);
        }else{
            while (i <= num)
            {
                if(ft_is_prime(i)){
                    rest += i;
                }
                i++;
            }
            ft_putnbr(rest);
        }  
        write(1, "\n", 1);
    }else
        write(1, "0\n", 2);
}
