#include <stdlib.h>
#include <stdio.h>
int ft_ultimate_range(int **range, int min, int max){
    int i = 0;
    int len = max - min;
    int *rest;

    if(min > max){
        *range = NULL;
        return 0;
    }

    rest = (int *)malloc(sizeof(int) * len);
    if(!rest)
        return -1;
    while(min < max)
        rest[i++] = min++;
    *range = rest;
    return len;
}
int main(){
    int *range = NULL;
    int size = ft_ultimate_range(&range , 5, 15);
    int i = 0;
    if(range != NULL){
        while (i < size){
            printf("%d", range[i]);
            i++;
        }
        printf("\n");
        free(range);
    }else
        printf("there is no range allocated here !!...\n");
    return 0;
}