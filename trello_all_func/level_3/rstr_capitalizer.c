#include <unistd.h>
char *ft_strupcase(char *str){
    int i = 0;
    while (str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i++;
    }
   return str; 
}
int ft_strlen(char *str){
    int i = 0;
    while(str[i])
        i++;
    return i;
}

char *ft_strcapitalize(char *str){
    int i = ft_strlen(str) - 1;
    ft_strupcase(str);
    while (str[i])
    {
       if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9')){
         if(str[i - 1] >= 'A' && str[i - 1] <= 'Z')
            str[i - 1] += 32;
       }
       i--;
    }
    return str;

}
int main(int ac, char **av){
    int i;
    int j = 1;
    char *rest;
    if(ac >= 2){
        while (j <= ac)
        {
            i = 0;
            rest = ft_strcapitalize(av[j]);
            while(rest[i]){
                write(1, &rest[i],1);
                i++;
            }
            write(1, "\n",1);
            j++;
        }
    }else
        write(1, "\n",1);
}