#ifndef LIST_NODE_H
#define LIST_NODE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct list{
    void *content;
    struct list *next;
} t_list;
t_list *create_node(void *content);
#endif 