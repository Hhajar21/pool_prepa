int ft_strlen(char *str){
    int i = 0;
    while (str[i])
        i++;
    return i;
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size){
    unsigned int len_d = ft_strlen(dest);
    unsigned int len_s = ft_strlcat(src);
    unsigned int i = 0;
    if(size < len_d  || size == 0)
        return len_d + size;
    while (i < size - len_d -1 && src[i])
        dest[len_d++] = src[i++];
    dest[len_d] =  '\0';
    return len_d;
}