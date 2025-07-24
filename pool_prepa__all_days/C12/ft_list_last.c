#include "ft_list.h"
t_list *ft_list_last(t_list *begin_list){
    if(!begin_list)
        return NULL;
    while (begin_list->next != NULL)
        begin_list= begin_list->next;
    return begin_list;
}
// int main(){
//     t_list *node = NULL;
//      int a = 10;
//      int b= 6;
//      int c= 7;
//      int d = 0;
//      ft_list_push_front(&node , &a);
//      ft_list_push_front(&node , &b);
//      ft_list_push_front(&node , &c);
//      ft_list_push_front(&node , &d);
//     node = ft_list_last(node);
//     printf("last  elem in the list is : %d\n", *(int *)(node->data));
//     return 0;
// }