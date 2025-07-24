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
    if(!(*begin_list)|| !begin_list || !cmp)
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
#include <string.h>
int main(){
    t_list *node;
    char **str = malloc(sizeof(char *)*4);
    str[3] = strdup("three");
    str[2] = strdup("two");
    str[1] = strdup("four");
    str[0] = strdup("one");
    node = ft_list_push_strs(4, str);
    printf("the list is : \n");
    printf("Compare 'one' and 'two': %d\n", ft_strcmp("four", "one"));
    printf("Compare 'three' and 'four': %d\n", ft_strcmp("two", "three"));

    print_list(node);
    printf("the sort list is : \n");
    ft_list_sort(&node, ft_strcmp);
    print_list(node);

}