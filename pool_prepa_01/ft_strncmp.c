int ft_strncmp(char *s1, char *s2, unsigned int n){
    unsigned int i = 0;
    unsigned int rest;
    while (s1[i] == s2[i] && s1[i] && i < n)
        i++;
    rest = s1[i] - s2[i];
    return rest;
}