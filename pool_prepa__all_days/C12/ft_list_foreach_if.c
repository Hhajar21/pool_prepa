#include "ft_list.h"

int ft_strcmp(char *s1, char *s2){
    int i = 0;
    int rest;
    while (s1[i] && s1[i] == s2[i])
        i++;
    rest = s1[i] - s2[i];
    return rest;
}

void ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)()){
    t_list *node = begin_list;

    while (node != NULL)
    {
        if(node->data != NULL && cmp(node->data, data_ref) == 0){
            printf("\n");
            f(node->data);
        }
        node = node->next; 
    }
    
}
void upper_node_data(void *data){
    int i = 0;
    char *str = (char *)data;
    while (str && str[i] )
    {

        printf("str[i] : %c\n", str[i]);
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] -=32;
        i++;
    }
    printf("the out*put is : ");
}
void print_list(t_list *node){
    while (node != NULL)
    {
        printf("%s->", (char *)(node->data));
        node = node->next;
    }
    printf("\n");
}
#include <string.h>
int main(){
  

    t_list *node = NULL;
    char *data_ref = "one";
    char **str= malloc(sizeof(char *) * 5);
    str[3] = strdup("one");
    str[2] = strdup("two");
    str[1] = strdup("three");
    str[0] = NULL;
    
    node = ft_list_push_strs(4, str);
    printf("the original list is :\n");
    print_list(node);
    printf("the list after using foreach_if is :\n");
    ft_list_foreach_if(node, upper_node_data, data_ref, ft_strcmp);
    print_list(node);

}