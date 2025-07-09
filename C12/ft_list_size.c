#include "ft_list.h"
#include <stdio.h>
int ft_list_size(t_list *begin_list){
    int count = 0;
    if(!begin_list)
        return 0 ;
    while (begin_list != NULL)
    {
        count++;
        begin_list = begin_list->next;
    }
    return count;
}

// int main(){
//     t_list *node = NULL;
//     int a = 10;
//     int b= 6;
//     int c= 7;
//     int d = 0;
//     ft_list_push_front(&node , &a);
//     ft_list_push_front(&node , &b);
//     ft_list_push_front(&node , &c);
//     ft_list_push_front(&node , &d);
//     int size = ft_list_size(node);
//     printf("size of the elem in the list is : %d\n", size);
//     return 0;
// }