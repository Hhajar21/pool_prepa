#include "unistd.h"
int len(char *str){
    int i = 0;
    while (str[i])
        i++;
    return i;
}
int main(){
    char alpha[] = "abdcefghijklmnopqrstuvwxyz";
    int i = len(alpha)-1;
    while (i >= 0)
    {
        if(i % 2 != 0){
            write(1,&alpha[i], 1);
        }else{
            alpha[i] -=32;
            write(1, &alpha[i],1);
        }
        i--;
    }
    write(1, "\n",1);
}