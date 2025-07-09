#include "ft_list.h"
#include <stdio.h>

void ft_list_foreach(t_list *begin_list, void (*f)(void *)){
    t_list *node = begin_list;
    while (node != NULL)
    {
        f(node->data);
       node = node->next;
    }
    
}
void print_string(void *data) {
    printf("%s\n", (char *)data);
}

int main() {
    char *str[] = {"one", "two", "three", "four"};
    t_list *node = ft_list_push_strs(4, str);

    printf("Original list:\n");
    ft_print_list(node);

    printf("Applying ft_list_foreach (printing data):\n");
    ft_list_foreach(node, print_string);
}