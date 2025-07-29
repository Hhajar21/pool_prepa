int myAtoi(char* str) {
    int i = 0;
    int signe = 1;
    long long int rest = 0;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if(str[i] == '+' || str[i] == '-'){
        if(str[i] == '-')
            signe *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {   
        rest = rest * 10 + (str[i] - '0');
        if (signe == 1 && rest > INT_MAX)
            return INT_MAX;
        if (signe == -1 && -rest < INT_MIN)
            return INT_MIN;
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
    printf("%d\n",ft_atoi("-91283472332")); // max int 
    printf("%d\n", ft_atoi(" ---+--+1234ab567")); // ➜ 0
    printf("%d\n", ft_atoi("   -123"));           // ➜ -123
    printf("%d\n", ft_atoi("   +456"));           // ➜ 456
    printf("%d\n", ft_atoi("   --789"));          // ➜ 0
    printf("%d\n", ft_atoi(" 1234abc"));
}