int		max(int* tab, unsigned int len){
    unsigned int i = 0;
    int max = tab[0];
    if(len == 0)
        return 0;
    while (i < len)
    {
        if(tab[i] > max)
            max = tab[i];
       i++;
    }
    return max;
}
#include <stdio.h>
int main(){
    int tab[] = {1, 10, 5, 90, 0};
    int len = 5;
    int rest = max(tab, 5);
    printf(" the max is  : %d\n", rest);
}