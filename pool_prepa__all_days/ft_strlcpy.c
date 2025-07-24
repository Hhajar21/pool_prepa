int ft_strlen(char *str){
    int i = 0;
    while (str[i])
        i++;
    return i;
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size){
    unsigned int i = 0;
    unsigned int len = ft_strlen(src);

    if(size == 0)
        return len;
    while (src[i])
    {
        if( i < size -1)
            dest[i] = src[i];
        i++;
    }
    if (size > 0)
        dest[i] = '\0';
    return len;
}