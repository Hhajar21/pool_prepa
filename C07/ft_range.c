#include <stdlib.h>
#include <stdio.h>
int *ft_range(int min, int max){
    int *rest;
    int len_arr = max - min;
    int i = 0;
    if(min >= max)
        return NULL;
    rest = (int *)malloc(sizeof(int) * len_arr);
    if(!rest)
        return NULL;
    while (min < max)
        rest[i++] = min++;
    return rest;
}
int main(){
    int *rest = ft_range(-4, 10);
    int i = 0;
    if(rest == NULL)
        return 1;
    while (i < 10- (-4))
    {
        printf("%d", rest[i++]);
    }
    printf("\n");
   free(rest);
   return 0;
}