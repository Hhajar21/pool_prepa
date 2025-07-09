#include "ft_list.h"
#include <stdio.h>
void ft_list_clear(t_list *begin_list, void (*free_fct)(void *)){
    t_list *next;
    while (begin_list != NULL)
    {
        next = begin_list->next;
        free_fct(begin_list->data);
        free(begin_list);
        begin_list = next;
    }
    if(begin_list == NULL)
        printf("the list has been cleared !!...\n");
}
void free_data(void *data){
    free(data);
}
int main(){
    t_list *node = NULL;

    int *a = malloc(sizeof(int));
    int *b = malloc(sizeof(int));
    int *c = malloc(sizeof(int));
    int *d = malloc(sizeof(int));

    *a = 10;
    *b = 6;
    *c = 7;
    *d = 0;

    ft_list_push_front(&node, a);
    ft_list_push_front(&node, b);
    ft_list_push_front(&node, c);
    ft_list_push_front(&node, d);

    ft_print_list(node);
    ft_list_clear(node, free_data);

    return 0;
}