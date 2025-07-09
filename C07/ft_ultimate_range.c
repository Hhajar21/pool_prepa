#include <stdlib.h>
#include <stdio.h>
int ft_ultimate_range(int **range, int min, int max){
    int *arr;
    int i = 0;
    int size = max - min;
    if(min > max){
        *range = NULL;
        return 0;
    }
    arr = (int *)malloc(sizeof(int) *size);
    if(!arr)
        return -1;
    while (min < max)
       arr[i++] = min++;
    *range = arr;
    return size;
}
int main(){
    int *range = NULL;
    int size = ft_ultimate_range(&range , 10, 5);
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