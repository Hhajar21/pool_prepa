#include "ft_list.h"
int ft_strcmp(void *s1, void *s2){
    int i =0;
    char *a = (char  *)s1;
    char *b = (char *)s2;
    while (a[i] && a[i]==b[i])
        i++;
    return a[i] - b[i];
}
t_list *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)());t_list *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)()){
    t_list *node = begin_list;
    if(!node)
        return NULL;
    while (node != NULL)
    {
        if(cmp(node->data, data_ref)== 0)
            return node;
        node = node->next;
    }
    return NULL;
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
    char *str[] = {"one", "two", "three", "four"};
    t_list *node = ft_list_push_strs(4, str);
    char data_ref[] = "two";
    t_list *rest;
    printf("the orginel =list is : \n");
    print_list(node);
    printf("the update is : \n");
    rest = ft_list_find(node, data_ref, ft_strcmp);
    print_list(rest);
}