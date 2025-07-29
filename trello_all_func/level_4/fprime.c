#include <stdlib.h>
#include <stdio.h>
int main(int ac, char **av){
    int i = 2;
    int av_1 = 0;
    if(ac == 2){
        av_1 = atoi(av[1]);
        if(av_1 == 1)
            printf("1");
        while(i <= av_1){
            if( av_1 % i == 0){
                printf("%d", i);
                av_1 /= i;
                if(av_1 != 1)
                    printf("*");
            }else{
                i++;
            }
        }
        printf("\n");
    }else
        printf("\n");
}