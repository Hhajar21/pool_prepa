#include "ft_list.h"
t_list *ft_create_elem(void *data)
{
    t_list *node = malloc(sizeof(t_list));
    if(!node)
        return NULL;
    node->data = data;
    node->next = NULL;
    return node;
}
// int main()
// {
//     int x = 24;
//     t_list *node = ft_create_elem(&x);
//     printf("%d\n", *(int *)(node->data));
// }