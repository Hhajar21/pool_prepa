unsigned char	reverse_bits(unsigned char octet){
    unsigned char bit;
    unsigned char rest = 0;
    int i = 0;
    while(i <= 7){
        bit = (octet >> i) & i;
        rest = rest | bit << (7 - i);
        i++;
    }
    return rest;
}
#include "unistd.h"
void	print_bits(unsigned char octet){
    int i = 7;
    while (i >= 0)
    {
        if(octet & (1 << i))
            write(1, "1", 1);
        else
            write(1, "0", 1);
        i--;
    }
}

int main(){
    unsigned char rest = reverse_bits(2);
    write(1, "the original bites of number 2 is :\n",37);
    print_bits(2);
    write(1, "\nthe revers bites is : \n",25);
    print_bits(rest);
    write(1, "\n",1);

}