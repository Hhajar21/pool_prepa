#include <stdio.h>
#include <unistd.h>
int main() {

   char ch;

   printf("Enter a character: ");
   ch = getchar();

   puts("You entered: ");
   putchar(ch);
write(1, "\n", 1);
   return 0;

}