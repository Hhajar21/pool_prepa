int ft_strncmp(char *s1, char *s2, unsigned int n){
    int i = 0;
    int rest;
    while (s1[i] == s2[i] && s1[i] && i <= n)
        i++;
    rest = s1[i] - s2[i];
    return rest;
}