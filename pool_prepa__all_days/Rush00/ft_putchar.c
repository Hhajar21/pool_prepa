#include <unistd.h>
void ft_putchar(char c){
    write(1, &c, 1);
}
// ignord ls -la 
// rm -rf 