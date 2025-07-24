#include "ft_list.h"
t_list *ft_list_push_strs(int size, char **strs){
    int i = 0;
    t_list *list = NULL;
    t_list *node;
    while (i < size)
    {
        node = ft_create_elem(strs[i]);
        if(!node)
            return NULL;
        node->next = list;
        list = node;
        i++;
    }
    return list;
}
//  void print_list(t_list *root){
//     t_list *node = root;
//    while (node != NULL)
//    {
//        printf("%s->", (char *)(node->data));
//        node = node->next;
//    }

//    printf("Null\n");
//  }
//  int main(){
//     char *strs[] = {"one", "two", "three", "four"};
//     t_list *node;
//     node = ft_list_push_strs(4, strs);
//     print_list(node);
    
//  }
