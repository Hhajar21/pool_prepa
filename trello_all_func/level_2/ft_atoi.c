int	ft_atoi(const char *str){
    int i = 0;
    int signe = 1;
    int rest = 0;
    while(str[i] == ' ' || (str[i] == '\t' && str[i] == '\r'))
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
#include <stdio.h>
int main(){
    printf("%d\n",ft_atoi(" ---+-+-1234ab567"));
    printf("%d\n",ft_atoi(" -+1234ab567"));
    printf("%d\n",ft_atoi(" -1234ab567"));
    printf("%d\n",ft_atoi(" "));
    printf("%d\n",ft_atoi(" 1337"));
    printf("%d\n", ft_atoi(" ---+--+1234ab567")); // ➜ 0
    printf("%d\n", ft_atoi("   -123"));           // ➜ -123
    printf("%d\n", ft_atoi("   +456"));           // ➜ 456
    printf("%d\n", ft_atoi("   --789"));          // ➜ 0
    printf("%d\n", ft_atoi(" 1234abc"));
}