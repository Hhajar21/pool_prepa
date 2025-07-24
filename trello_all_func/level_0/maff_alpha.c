#include "unistd.h"
int main(){
    char alpha[] = "abdcefghijklmnopqrstuvwxyz";
    int i = 0;
    while (alpha[i])
    {
        if(i % 2 == 0){
            write(1,&alpha[i], 1);
        }else{
            alpha[i] -=32;
            write(1, &alpha[i],1);
        }
        i++;
    }
    write(1, "\n",1);
}