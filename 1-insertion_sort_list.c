#include "sort.h"

/**
 * insertion_sort_list - Function that sorts d-linked list with insertion sort
 * @list: The list to sort
 * Return: None
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node, *insert, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (node = (*list)->next; node != NULL; node = tmp)
	{
		tmp = node->next;
		insert = node->prev;
		while (insert != NULL && node->n < insert->n)
		{
			node->prev = insert->prev;
			insert->next = node->next;
			node->next = insert;

			if (insert->prev != NULL)
				insert->prev->next = node;
			else
				*list = node;

			if (insert->next != NULL)
				insert->next->prev = insert;

			insert->prev = node;
			insert = node->prev;

			print_list((const listint_t *)*list);
		}
	}
}

