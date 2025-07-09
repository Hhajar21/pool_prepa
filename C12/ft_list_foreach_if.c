#include "ft_list.h"
#include <stdio.h>
/*the logic is 
for each node in the list:
    if cmp(node->data, data_ref) == 0:
        apply f(node->data)
like if we compire the data and the data reference and return 0 not 1 or -1 
than we will apply f function;
*/
void ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void
*data_ref, int (*cmp)()){
    t_list *node = begin_list;
    while (node != NULL)
    {
        if(cmp(node->data, data_ref) == 0)
            f(node->data);
        node = node->next;
    }
}

int ft_strcmp(void *a, void *b) {
    char *s1 = (char *)a;
    char *s2 = (char *)b;
    int i = 0;
    while (s1[i] == s2[i] && s1[i])
        i++;
    return (s1[i] - s2[i]);
}

void print_string(void *data) {
    printf("%s\n", (char *)data);
}

int main() {
    char *str[] = {"one", "two", "three", "four"};
    t_list *node = ft_list_push_strs(4, str);

    printf("Original list:\n");
    ft_print_list(node);

    printf("Applying ft_list_foreach_if (printing data):\n");
    ft_list_foreach_if(node, print_string, "one", ft_strcmp);
}