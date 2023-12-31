#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a linked list
 * @h: head of linked list node
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
