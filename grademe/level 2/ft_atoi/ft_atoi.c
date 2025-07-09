int	ft_atoi(const char *str){
    int i = 0;
    int status = 1;
    int rest = 0;
    int count_signe = 0;
    while(str[i] == ' ' || ( str[i] >= '\t' && str[i] <= '\r') )
        i++;
    while(str[i] == '-' || str[i] == '+'){
            if(str[i] == '-')
                status *= -1;
        count_signe++;
        i++;
    }
    if(count_signe > 1)
        return 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        rest *= 10;
        rest += str[i] - '0';
        i++;
    }
    return rest * status;
}


