 unsigned int ft_strlen(char *str){
    unsigned int i = 0;
    while (str[i])
        i++;
    return i;
}
unsigned int ft_strlcat(char *dest, char *src, unsigned int size){
    unsigned int des_len = ft_strlen(dest);
    unsigned int src_len = ft_strlen(src);
    unsigned int i = 0;
    if( size < des_len || size == 0)
        return des_len + src_len;
    while (src[i] && i < size - des_len - 1)
       dest[des_len++] = src [i++];
    return (des_len);
}