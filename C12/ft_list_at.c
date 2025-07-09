#include "ft_list.h"
#include <stdio.h>
t_list *ft_list_at(t_list *begin_list, unsigned int nbr){
    unsigned int count = 0;
    t_list *node = begin_list;
    while (node != NULL && count < nbr)
    {
        count++;
        node = node->next;
    }
    return node;
}
int main() {
    t_list *list = NULL;
    char *strs[] = {"one", "two", "three"};
    list = ft_list_push_strs(3, strs);

    t_list *result = ft_list_at(list, 1);  
    if (result)
        printf("Data at index 1: %s\n", (char *)result->data);
    else
        printf("Null\n");

    return 0;
}
