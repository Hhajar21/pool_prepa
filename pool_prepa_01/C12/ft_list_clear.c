#include "ft_list.h"
void free_fct( void *data){
    free(data);
}
void ft_list_clear(t_list *begin_list, void (*free_fct)(void *)){
    t_list *node;
    while (begin_list != NULL)
    {
        node = begin_list->next;
        free(begin_list->data);
        free(begin_list);
        begin_list = node;
    }
    if(begin_list == NULL)
        printf("the list has been cleared !!...\n");
}
void print_list(t_list *root){
    t_list *node = root;
    while (node != NULL)
    {
        printf("%d->", *(int *)(node->data));
        node = node->next;
    }

    printf("Null\n");
}
int main(){
    t_list *node = NULL;

    int *a = malloc(sizeof(int));
    int *b = malloc(sizeof(int));
    int *c = malloc(sizeof(int));
    int *d = malloc(sizeof(int));

    *a = 10;
    *b = 7;
    *c = 6;
    *d = 0;

    ft_list_push_front(&node, a);
    ft_list_push_front(&node, b);
    ft_list_push_front(&node, c);
    ft_list_push_front(&node, d);

    print_list(node);
    ft_list_clear(node, free_fct);
    return 0;
}