// #include <stdbool.h>

// int	ft_atoi(const char *str)
// {
//     int		result;
//     int		sign;
    

//     result = 0;
//     sign = 1;
   

//     while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
//         str++;
//     if (*str == '-' || *str == '+')
//     {
//         if (*str == '-')
//             sign = -1;
//         str++;
//     }
//     while (*str >= '0' && *str <= '9')
//     {
//         result = result * 10 + (*str - '0');
//         str++;
//     }
//     return (result * sign);
// }


int ft_atoi(char *str){
    int i = 0;
    int rest = 0;
    int status = 1;
    int count_s = 0;
    while(str[i] == 32 || (str[i] >= '\t' && str[i] <= '\r'))
        i++;
    while(str[i] == '-' || str[i] == '+'){
        if(str[i] == '-')
            status *= -1;
        count_s++;
        i++;
    }
    if(count_s > 1)
        return 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        rest = rest * 10 + (str[i] - '0');
        i++;
    }
    return rest * status;
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



