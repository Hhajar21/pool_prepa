#include <unistd.h>
int	ft_atoi(const char *str){
    int i = 0;
    int signe = 1;
    int rest = 0;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if(str[i] == '+' || str[i] == '-'){
        if(str[i] == '-')
            signe *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {   
        rest *= 10;
        rest += (str[i] - '0');
        i++;
    }
    return (rest *signe);
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
    int num_tabl[] = {1,2,3,4,5,6,7,8,9};
    int i;
    int num;
    int rest = 0;
    if(ac >= 2){
        num = ft_atoi(av[1]);
        i = 0;
        while (i < 9)
        {
            rest = num_tabl[i] * num;
            ft_putnbr(num_tabl[i]);
            write(1, " x ",3);
            ft_putnbr(num);
            write(1, " = ",3);
            ft_putnbr(rest);
            write(1, "\n",1);
            i++;
        }
    }else
        write(1, "\n",1);
}