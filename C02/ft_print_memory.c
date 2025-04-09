#include "unistd.h"

void memo_address(void *addr){
    int i = 15;
    unsigned long address = (unsigned long)addr;  // Convert pointer to integer for manipulation
    char arr_hex[] = "0123456789abcdef";
    char rest[16];

    while (i >= 0) {  // Generate each hex digit by dividing/modulo 16
        rest[i] = arr_hex[address % 16];  // Get hex character for the current digit
        address /= 16;
        i--;
    }

    write(1, rest, 16);  // Write address in hex
    write(1, ": ", 2);    // Add colon and space after address
}

void memo_in_hex(void *addr){
    unsigned char *byte_addr = (unsigned char *)addr;  // Treat addr as a byte array
    char arr_hex[] = "0123456789abcdef";
    char rest[32];  // Buffer for 16 bytes in hexadecimal (32 characters total)
    int j=0;
    int i = 0;
    while (i < 16) {  // Loop over 16 bytes (up to 16 characters per byte)
       
        rest[i * 2] = arr_hex[byte_addr[i] / 16];  // First hex digit
        rest[i * 2 + 1] = arr_hex[byte_addr[i] % 16];  // Second hex digit
        i++;
    }
    
    
    write(1, rest, 32);  // Write 16 bytes in hexadecimal format
}


void memo_in_printable(void *addr) {
    unsigned char *byte_addr = (unsigned char *) addr;  // Treat addr as a byte array
    char rest[17];  // Buffer to hold 16 printable characters (plus null-terminator)
    int i = 0;

    // Loop over 16 bytes (up to 16 characters)
    while (i < 16) {
        // If the byte is a printable character, print it; otherwise, print a dot (.)
        if (byte_addr[i] >= 32 && byte_addr[i] <= 126) {
            rest[i] = byte_addr[i];  // Printable character
        } else {
            rest[i] = '.';  // Non-printable character
        }
        i++;
    }

    rest[i] = '\0';  // Null-terminate the string for proper output
    write(1, rest, 16);  // Write the printable characters or dots
}

void *ft_print_memory(void *addr, unsigned int size){
    unsigned int i = 0;

    while (i < size) {
        memo_address(addr + i);  // Print the address
        write(1, " ", 1);         // Space between address and data
        memo_in_hex(addr + i);    // Print the hexadecimal representation of data
        write(1, " ", 1);         // Space between address and data
        memo_in_printable(addr + i);
        write(1, "\n", 1);        // Newline after printing each block of memory
        i += 16;                  // Move to the next 16-byte block
    }

    return addr;
}

int main(void) {
    char sample[] = "Bonjour les aminches\nc'est fou\ttout ce qu'on peut faire avec\nprint_memory\n\n\nlol.lol\n ";

    ft_print_memory(sample, sizeof(sample));  // Call print_memory with sample data
    return 0;
}
