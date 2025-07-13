#include "ft_list.h"
void ft_list_reverse_fun(t_list *begin_list){
    t_list	*node;
	t_list	*next;
	t_list	*temp;

	node = begin_list;
	while(node != NULL)
	{
		next = node->next;
		while(next != NULL)
		{
			temp = node->data;
			node->data = next->data;
			next->data = temp;
			next = next->next;
		}
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
   printf("revese fun list is :\n");
   ft_list_reverse_fun(node);
   print_list(node);
}
