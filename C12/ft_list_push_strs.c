#include "ft_list.h"
#include <stdio.h>
t_list *ft_list_push_strs(int size, char **strs){
    int pos = 0;
    t_list *list = NULL;
    while (pos < size)
    {
       t_list *node = ft_create_elem(strs[pos]);
        if(!node)
            return NULL;
        node->next = list;
        list = node;
        pos++;
    }
    return list;
}
void ft_print_list(t_list *head){
    t_list *node = head;
    while (node != NULL)
    {
        printf("%s -> ", (char *)(node->data));
        node = node->next;
    }
    printf("NULL\n");
}
// int main(){
//     char *str[] = {"one", "two", "three", "four"};
//     t_list *node = ft_list_push_strs(4, str );
//     ft_print_list(node);
// }