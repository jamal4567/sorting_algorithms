#include "sort.h"
/**
*
* insertion_sort_list -  sorts a doubly linked list of integers in ascending order
* @list: linked list input to sort
*
*/
void insertion_sort_list(listint_t **list)
{
	int i;
	listint_t *tmp;
	
	if (list)
	{
		tmp = *list;
		while (tmp != NULL)
		{
			while (tmp != NULL)
			{
				if (tmp->next != NULL)
				{
					if (tmp->n > tmp->next->n)
					{
						i = tmp->n;
						*(int *)&tmp->n = tmp->next->n;
						*(int *)&tmp->next->n = i;
						tmp = *list;
						print_list(*list);
						break;
					}
				}
				tmp = tmp->next;
			}
		}
	}
}
