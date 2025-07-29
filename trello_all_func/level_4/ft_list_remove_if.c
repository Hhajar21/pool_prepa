#include "ft_list.h"
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)()){
    t_list *node;
    t_list *removed;
    if(!begin_list)
        return;
    node = *begin_list;
    while (node != NULL && node->next != NULL)
    {
        removed = node->next;
        if(cmp(removed->data, data_ref) == 0){
            node->next = removed->next;
            free(removed->data);
            free(removed);
        }else
            node = node->next;
    }
}