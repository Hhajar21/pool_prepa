/*
Pseudocode for ft_list_reverse:
Function ft_list_reverse(pointer to head of list):

    Initialize:
        prev = NULL
        current = head

    While current is not NULL:
        Save current's next node → next = current.next

        Reverse the link → current.next = prev

        Move prev and current one step forward:
            prev = current
            current = next

    After loop ends:
        head = prev

*/
#include "ft_list.h"
#include <stdio.h>
void ft_list_reverse(t_list **begin_list){
    t_list *prev = NULL;
    t_list *curr = *begin_list;
    t_list *next;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *begin_list = prev;
}
int main() {
    char *str[] = {"one", "two", "three", "four"};
    t_list *node = ft_list_push_strs(4, str );

    printf("Original list:\n");
    ft_print_list(node);

    ft_list_reverse(&node);

    printf("Reversed list:\n");
    ft_print_list(node);

    return 0;
}
