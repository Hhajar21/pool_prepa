#include "ft_list.h"
int ft_strcmp(void *s1, void *s2){
    int i = 0;
    char *a = (char *)s1;
    char *b = (char *)s2;
    int rest;
    while (a[i] && a[i] == b[i])
        i++;
    rest = a[i] - b[i];
    return rest;
}
void ft_list_sort(t_list **begin_list, int (*cmp)(void *, void *)) {
    t_list *node;
    void *tmp;
    if(!begin_list || !cmp)
        return;
    if(!(*begin_list))
        return;
    node = *begin_list;
    while (node->next != NULL)
    {
        if(cmp(node->data, node->next->data) > 0){
            tmp = node->data;
            node->data = node->next->data;
            node->next->data = tmp;
            node = *begin_list;
        }else
            node = node->next;
    }
    
}
void print_list(t_list *node){
    while (node != NULL)
    {
        printf("%s->", (char *)(node->data));
        node = node->next;
    }
    printf("NULL\n");
}
void ft_list_push_front(t_list **begin_list, void *data){
    t_list *node = ft_create_elem(data);
    if(!node)
        return;
    node->next = *begin_list;
    *begin_list = node;
}
void ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)()){
    t_list *node;
    if(!(*begin_list)|| !begin_list || !cmp)
        return;
    node = *begin_list;
    ft_list_push_front(&node, data);
    ft_list_sort(&node, cmp);
    *begin_list = node;
}

#include <string.h>
int main(){
    t_list *node;
    char **str = malloc(sizeof(char *)*4);
    str[3] = strdup("three");
    str[2] = strdup("two");
    str[1] = strdup("four");
    str[0] = strdup("one");
    char data[] ="six";
    node = ft_list_push_strs(4, str);
    printf("the list is : \n");
    print_list(node);
    printf("the sort list is : \n");
    ft_sorted_list_insert(&node,data,ft_strcmp);
    print_list(node);

}
