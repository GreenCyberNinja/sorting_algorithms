#include "sort.h"
/**
* insertion_sort_list - sort a dlist with insertion algo
* @list: list to be sorted
*/
void insertion_sort_list(listint_t **list)
{
	listint_t  *nav = *list;
	listint_t *tmp, *after, *before;

	if (list == NULL)
		return;

	while (nav)
	{
		nav = nav->next;
		if (nav == NULL)
			break;
		if (nav->n < nav->prev->n)
		{
			tmp = nav;
			while (tmp->n < tmp->prev->n)
			{
				after = tmp->prev->prev;
				before = tmp->prev;
				before->next = tmp->next;
				if (before->next != NULL)
					before->next->prev = before;
				before->prev = tmp;
				tmp->next = before;
				tmp->prev = after;
				if (after == NULL)
				{
					*list = tmp;
					print_list(*list);
					break;
				}
				else
				{
					after->next = tmp;
					print_list(*list);
				}
			}
		}
	}
}
