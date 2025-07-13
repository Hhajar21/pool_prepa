/*
the logic: 
Set node = *begin_list

While node is not NULL and node->data == data_ref:
    free node->data
    free node
    move *begin_list forward

Set prev = node
Set curr = node->next

While curr is not NULL:
    If cmp(curr->data, data_ref) == 0:
        prev->next = curr->next
        free curr->data
        free curr
        curr = prev->next
    Else:
        prev = curr
        curr = curr->next

*/
#include "ft_list.h"
#include <stdio.h>
void ft_list_remove_if(t_list **begin_list, void *data_ref, 
int (*cmp)(), void (*free_fct)(void *)){
    t_list *curr;
    t_list *node;
    while (*begin_list != NULL && cmp((*begin_list)->data, data_ref) == 0){
        node = *begin_list;
        *begin_list = node->next;
        free_fct(node->data);
        free(node);
    }
    curr = *begin_list;
    while (curr != NULL && curr->next != NULL)
    {
        if(cmp(curr->next->data, data_ref) == 0){
            node = curr->next;
            curr->next = node->next;
            free_fct(node->data);
            free(node);
            
        }else{
            curr = curr->next;
        }
    }
    
}

// void ft_print_list(t_list *list) {
//     while (list) {
//         printf("%s -> ", (char *)list->data);
//         list = list->next;
//     }
//     printf("NULL\n");
// }

int ft_strcmp(void *a, void *b) {
    char *s1 = (char *)a;
    char *s2 = (char *)b;
    int i = 0;
    while (s1[i] == s2[i] && s1[i])
        i++;
    return (s1[i] - s2[i]);
}

void free_str(void *data) {
    free(data);
}

int main() {
    char *strs[] = {"one", "two", "three", "two", "four"};
    t_list *list = ft_list_push_strs(5, strs);

    printf("Original list:\n");
    ft_print_list(list);

    char data_ref[] = "two";
    ft_list_remove_if(&list, data_ref, ft_strcmp, free_str);

    printf("\nList after removing \"%s\":\n", data_ref);
    ft_print_list(list);

    ft_list_remove_if(&list, "two", ft_strcmp, free_str); // remove all (non-matching dummy ref won't match anything)
    return 0;
}