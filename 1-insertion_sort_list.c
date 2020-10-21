#include "sort.h"
/**
 *insertion_sort_list - sorts a doubly linked list of integers
 *@list: head.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *i, *nex, *pre, *pre1, *tem, *lis, *run;

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
				lis = pre;
				run = i;
				tem = lis->prev;
				if (tem)
					tem->next = run;
				run->prev = tem;
				lis->prev = run;
				lis->next = run->next;
				run->next = lis;
				if (lis->next != NULL)
					lis->next->prev = lis;
				if (run->prev == NULL)
					*list = run;
				print_list(*list);
			}
			i = pre1;
		}
		i = nex->next;
		nex = i;
	}

}
