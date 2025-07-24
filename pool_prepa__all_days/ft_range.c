#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max){
    int i = 0;
    int len = max - min;
    int *rest;
    if( min >= max )
        return NULL;
    rest = (int *)malloc(sizeof(int) * len);
    if(!rest)
        return NULL;
    while (min < max)
        rest[i++] = min++;
    return rest;
}
int main(){
    int min = 5;
    int max = 10;
    int *rest = ft_range(min, max);
    int i = 0;
    while (i < max - min)
    {
        printf("%d", rest[i]);
        i++;
    }
    printf("\n");
    free(rest);
}