#include "ft_list.h"
void free_fct( void *data){
    free(data);
}
int ft_strcmp(char *s1, char *s2){
    int i = 0;
    int rest;
    while (s1[i] && s1[i] == s2[i])
        i++;
    rest = s1[i] - s2[i];
    return rest;
}  
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *)){
    t_list *node;
    t_list *rest;
    if(!begin_list)
        return;
    rest = *begin_list;
    while (rest != NULL && rest->next != NULL)
    {
        node = rest->next;
        if (cmp(node->data, data_ref) == 0) 
        {
            rest->next = node->next;
            free_fct(node->data);
            free(node);
        }else
            rest = rest->next;
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
    char **str= malloc(sizeof(char *) * 5);
    str[3] = strdup("one");
    str[2] = strdup("two");
    str[1] = strdup("three");
    str[0] = strdup("four");
    t_list *node = ft_list_push_strs(4, str);
    char date_ref[] = "two";
    printf("the origenal list is : \n");
    print_list(node);
    printf("the update list is : \n");
    ft_list_remove_if(&node, date_ref, ft_strcmp, free_fct);
    print_list(node);

} 