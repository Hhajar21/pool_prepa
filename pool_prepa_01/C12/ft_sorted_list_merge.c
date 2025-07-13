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
void ft_list_merge(t_list **begin_list1, t_list *begin_list2){
    t_list *node ;
    if(*begin_list1 == NULL)
        *begin_list1 = begin_list2;
    node = *begin_list1;
    while (node->next != NULL)
        node = node->next;
    node->next = begin_list2;
}
void ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)()){
    if(!begin_list1 || !(*begin_list1) || !cmp)
        return;
    ft_list_merge(begin_list1, begin_list2);
    ft_list_sort(begin_list1, cmp);
}

void print_list(t_list *node){
    while (node != NULL)
    {
        printf("%s->", (char *)(node->data));
        node = node->next;
    }
    printf("NULL\n");
}
#include <string.h>
int main(){
    t_list *node_1;
    t_list *node_2;
    char **s_1 = malloc(sizeof(char *)*4);
    char **s_2 = malloc(sizeof(char *)*4);
    s_1[3] =strdup("four");
    s_1[2] =strdup("two");
    s_1[1] =strdup("three");
    s_1[0] =strdup("one");
    s_2[3] =strdup("eight");
    s_2[2] =strdup("sex");
    s_2[1] =strdup("seven");
    s_2[0] =strdup("five");
    node_1 = ft_list_push_strs(4, s_1);
    node_2 = ft_list_push_strs(4, s_2);
    printf("list 1 is : \n");
    print_list(node_1);
    printf("list 2 is : \n");
    print_list(node_2);
    printf("the final stored list is : \n");
    ft_sorted_list_merge(&node_1,node_2,ft_strcmp);
    print_list(node_1);
}
