#include "ft_list.h"
void ft_list_reverse(t_list **begin_list){
    t_list *last = NULL;
    t_list *current = *begin_list;
    t_list *next;
    while (current != NULL)
    {
        next = current->next;
        current->next = last;
        last = current;
        current = next;
    }
    *begin_list = last;
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
   t_list *node = NULL;
   char a[]= "one";
   char b[] = "two";
   char c[] = "three";
   char d[] = "four";
   ft_list_push_back(&node, &a);
   ft_list_push_back(&node, &b);
   ft_list_push_back(&node, &c);
   ft_list_push_back(&node, &d);
   printf("originale linked list is :\n");
   print_list(node);
   printf("revese linked list is :\n");
   ft_list_reverse(&node);
   print_list(node);
}