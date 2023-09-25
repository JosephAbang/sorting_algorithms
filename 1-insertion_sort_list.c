#include "sort.h"

/**
 * insertion_sort_list - Uses insertion to sort list
 * @list: pointer to doubly linked list
 * Return: void
 **/

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *sorted;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	sorted = (*list)->next;
	while (sorted)
	{
		current = sorted->prev;
		while (current && current->n > sorted->n)
		{
			if (current->prev)
				current->prev->next = sorted;
			if (sorted->next)
				sorted->next->prev = current;
			current->next = sorted->next;
			sorted->prev = current->prev;

			current->prev = sorted;
			sorted->next = current;

			if (sorted->prev == NULL)
				*list = sorted;
			if (current->next)
				current->next->prev = current;
			print_list(*list);
			current = sorted->prev;
		}
		sorted = sorted->next;
	}
}
