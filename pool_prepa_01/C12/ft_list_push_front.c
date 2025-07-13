#include "ft_list.h"
void ft_list_push_front(t_list **begin_list, void *data){
    t_list *node = ft_create_elem(data);
    if(!node)
        return;
    node->next = *begin_list;
    *begin_list = node;
}
// void print_list(t_list *root){
//     t_list *node = root;
//     while (node != NULL)
//     {
//         printf("%d\n", *(int *)(node->data));
//         node = node->next;
//     }
    
// }
// int main(){
//      t_list *node = NULL;
//      int a = 10;
//      int b= 6;
//      int c= 7;
//      int d = 0;
//      ft_list_push_front(&node , &a);
//      ft_list_push_front(&node , &b);
//      ft_list_push_front(&node , &c);
//      ft_list_push_front(&node , &d);
//      print_list(node);
//      return 0;
//  }