#ifndef FT_LIST_H
#define FT_LIST_H
#include <stdlib.h>
#include <stdio.h>
typedef struct    s_list{
    struct s_list *next;
    void          *data;
}t_list;
void    ft_list_foreach(t_list *begin_list, void (*f)(void *));
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());
t_list	*sort_list(t_list* lst, int (*cmp)(int, int));
#endif