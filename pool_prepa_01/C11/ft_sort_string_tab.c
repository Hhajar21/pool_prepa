int ft_strcmp(char *s1, char *s2) {
    int i = 0;

    while (s1[i] == s2[i] && s1[i])
        i++;
    return s1[i] - s2[i];
}

void ft_sort_string_tab(char **tab) {
    int i;
    int swapped;
    char *tmp;

    if (!tab)
        return;

    swapped = 1;  // start with any non-zero so the loop starts
    while (swapped) {
        swapped = 0;
        i = 0;
        while (tab[i + 1]) {
            if (ft_strcmp(tab[i], tab[i + 1]) > 0) {
                tmp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = tmp;
                swapped = 1;
            }
            i++;
        }
    }
}
