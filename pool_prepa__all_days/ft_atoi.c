#include "unistd.h"
int ft_atoi(char *str){
    int  i = 0;
    int signe = 1;
    //int count_signe = 0;
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