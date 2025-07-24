unsigned char	swap_bits(unsigned char octet){
    retun (octet << 4 | octet >> 4);
}