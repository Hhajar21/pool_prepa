#include "unistd.h"
void	print_bits(unsigned char octet){
    unsigned char bit_levels = 128;
    while (bit_levels > 0)
    {
        if(octet & bit_levels)
            write(1, "1",1);
        else
            write(1, "0",1);
        bit_levels >>= 1;
    }
}
