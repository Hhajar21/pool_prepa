#include "ft_list.h"
#include <stdio.h>
void ft_list_push_front(t_list **begin_list, void *data){
    t_list *node = ft_create_elem(data);
    if(!node)
        return;
    node->next = *begin_list;
    *begin_list = node;
}

void ft_print_list(t_list *head){
    t_list *node = head;
    while (node != NULL)
    {
        printf("%d -> ", *(char *)(node->data));
        node = node->next;
    }
    printf("NULL\n");
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
//     ft_print_list(node);
//     return 0;
// }