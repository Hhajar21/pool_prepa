#include "ft_list.h"
#include <stdio.h>
void ft_list_push_back(t_list **begin_list, void *data){
    t_list *node= *begin_list;
    if(*begin_list ==NULL){
        *begin_list = ft_create_elem(data);
        return;
    }
    while (node->next != NULL)
        node = node->next;
    node->next = ft_create_elem(data);
    
}
// int main(){
//     t_list *node = NULL;
//     t_list *last;
//     int a = 10;
//     int b= 6;
//     int c= 7;
//     int d = 0;
//     int k = 5;
//     ft_list_push_front(&node , &a);
//     ft_list_push_front(&node , &b);
//     ft_list_push_front(&node , &c);
//     ft_list_push_front(&node , &d);
//     ft_list_push_back(&node, &k);
//     last = ft_list_last(node);
//     printf("the last node in the list is : %d\n", *(int *)(last->data));
//     printf("the list is : \n");
//     ft_print_list(node);
    
//     return 0;
// }