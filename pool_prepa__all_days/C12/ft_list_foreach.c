#include "ft_list.h"
void ft_list_foreach(t_list *begin_list, void (*f)(void *)){
    if(!begin_list)
        return;
    while (begin_list != NULL)
    {
        f(begin_list->data);
        begin_list = begin_list->next;
    }
}
void print_string(void *data){
    printf("%s\n", (char *)(data));
}
void print_list(t_list *node){
    while (node != NULL)
    {
        printf("%s->", (char *)(node->data));
        node = node->next;
    }
    printf("NULL\n");
}
int main(){
    char *str[] = {"one", "two", "three"};
    t_list *node = ft_list_push_strs(4, str);
    printf("the orginal list is : \n");
    print_list(node);
    printf("the list after appling the foreach func is :");
    ft_list_foreach(node, print_string);
}