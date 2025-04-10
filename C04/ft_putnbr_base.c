// 

#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str) {
    int i = 0;
    while (str[i]) {
        i++;
    }
    return i;
}

char *ft_putnbr_base(int nbr, char *base) {
    long long int n = nbr;
    char *arr;
    int i = 0;
    int flag = 0;
    int j = 0;
    char tmp;
    int bl = ft_strlen(base);
    
    if (bl < 2)
        return NULL;
    
    if (n == 0) {
        arr = malloc(2 * sizeof(char));
        if (arr) {
            arr[0] = base[0];
            arr[1] = '\0';
        }
        return arr;
    }

    if (n < 0) {
        n = -n;
        flag = 1;
    }

    arr = malloc(34 * sizeof(char));
    if (!arr)
        return NULL;

    while (n > 0) {
        arr[i++] = base[n % bl];
        n /= bl;
    }

    if (flag) {
        arr[i++] = '-';
    }

    arr[i] = '\0';
    while (j < i / 2) {
        tmp = arr[j];
        arr[j] = arr[i - 1 - j];
        arr[i - 1 - j] = tmp;
        j++;
    }
    return arr;
}
