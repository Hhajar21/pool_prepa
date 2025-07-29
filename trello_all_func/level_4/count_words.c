int count_word(char *str){
    int i = 0;
    int count_w = 0;
    while (str[i])
    {
       if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t'){
            if(i > 0 && (str[i - 1] != ' ' && str[i - 1] != '\n' && str[i - 1] != '\t'))
                count_w++;
       }
       i++;
    }
    if(str[i] == '\0' && (str[i - 1] != ' ' && str[i - 1] != '\n' && str[i - 1] != '\t') )
        count_w++;

    return count_w;
}