#include "ft_list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int)) {
	int tmp;
	t_list *node;
	if (!lst)
		return NULL;
	node = lst;
	while (node->next) {
		if (cmp(node->data, node->next->data) > 0) {
			tmp = node->data;
			node->data = node->next->data;
			node->next->data = tmp;
		}else
			node = node->next;
	}
	return lst;
}
