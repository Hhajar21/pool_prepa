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
void ft_putnbr_hex(int nb){
    int i = 0;
    char *hex = "0123456789abcdef";
    char rest[100];
    if (nb == 0)
	{
		write(1, "0", 1);
		return;
	}
    while (nb > 0){
        rest[i++] = hex[nb % 16];
        nb /= 16;
    }
    while(--i >= 0)
        write(1, &rest[i],1);

}
int main(int ac, char **av){
    int av_1;
    if(ac == 2){
        av_1 = ft_atoi(av[1]);
        ft_putnbr_hex(av_1);
        write(1, "\n",1);
    }else
        write(1, "\n",1);
}