// #include <stdlib.h>
// #include <stdio.h>
// int main(){
//     char *test = malloc(110);
//     char *word = "hey zizo i love u ); <3";
//     int j = 0, i = 0;
//     if(!test)
//         free(test);
//     while (i < 10 && word[j])
//     {
  
//        test[i++] = word[j++];     
//     }
//     printf("the table output is : %s\n", test);
//     free(test);
//     printf("%s\n", test);
// }
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(){
	char *s = strdup("hello");
	free(s);
	write(1, s, 5);
	
}