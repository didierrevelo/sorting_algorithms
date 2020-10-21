#include "sort.h"
/**
 *insertion_sort_list - sorts a doubly linked list of integers
 *@list: head.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *i, *nex, *pre, *pre1, *tem, *l, *r;

	if (list == NULL)
		return;

	i = nex = *list;
	while (i != NULL)
	{
		while (i->prev != NULL)
		{
			pre = i->prev;
			pre1 = pre;
			if (pre->n > i->n)
			{
				l = pre;
				r = i;
				tem = l->prev;
				if (tem)
					tem->next = r;
				r->prev = tem;
				l->prev = r;
				l->next = r->next;
				r->next = l;
				if (l->next != NULL)
					l->next->prev = l;
				if (r->prev == NULL)
					*list = r;
				print_list(*list);
			}
			i = pre1;
		}
		i = nex->next;
		nex = i;
	}

}
