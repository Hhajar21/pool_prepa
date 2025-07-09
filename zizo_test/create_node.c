#include "List_node.h"
t_list *create_node(void *content){
    t_list *next = malloc(sizeof(t_list));
    if(!next)
        return NULL;
    next->content = content;
    next->next = NULL;
    return next;
}
int main(){
    int x = 24;
    t_list *next = create_node(&x);
    printf("the current node is : %d\n", *(int *)(next->content));
}