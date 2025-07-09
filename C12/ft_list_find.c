#include "ft_list.h"
#include <stdio.h>
t_list *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)()){
    t_list *node = begin_list;
    while (node != NULL)
    {
        if(cmp(node->data, data_ref) == 0)
            return node;
        node = node->next;
    }
   return NULL; 
}
int ft_strcmp(void *a, void *b) {
    char *s1 = (char *)a;
    char *s2 = (char *)b;
    int i = 0;
    while (s1[i] == s2[i] && s1[i])
        i++;
    return (s1[i] - s2[i]); 
}


int main() {
    char *str[] = {"one", "two", "three", "four"};
    t_list *node = ft_list_push_strs(4, str);
    char data_ref[] = "one";
    printf("Original list:\n");
    ft_print_list(node);

    printf("Applying ft_list_find (finding node):\n");
    t_list *find = ft_list_find(node, data_ref, ft_strcmp);
    ft_print_list(find);
}