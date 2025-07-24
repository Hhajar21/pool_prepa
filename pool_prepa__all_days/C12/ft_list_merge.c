#include "ft_list.h"
void ft_list_merge(t_list **begin_list1, t_list *begin_list2){
    t_list *node ;
    if(*begin_list1 == NULL)
        *begin_list1 = begin_list2;
    node = *begin_list1;
    while (node->next != NULL)
        node = node->next;
    node->next = begin_list2;
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
    s_1[3] =strdup("one");
    s_1[2] =strdup("two");
    s_1[1] =strdup("three");
    s_1[0] =strdup("four");
    s_2[3] =strdup("five");
    s_2[2] =strdup("sex");
    s_2[1] =strdup("seven");
    s_2[0] =strdup("eight");
    node_1 = ft_list_push_strs(4, s_1);
    node_2 = ft_list_push_strs(4, s_2);
    printf("list 1 is : \n");
    print_list(node_1);
    printf("list 2 is : \n");
    print_list(node_2);
    ft_list_merge(&node_1, node_2);
    printf("the mergge list is : \n");
    print_list(node_1);
}