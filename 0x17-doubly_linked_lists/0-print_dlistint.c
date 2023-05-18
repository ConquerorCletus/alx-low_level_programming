#include "lists.h"
/**
 * print_dlistint - print all element of the linked list.
 * @h: head pointer
 * Return: number of Nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t i = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
