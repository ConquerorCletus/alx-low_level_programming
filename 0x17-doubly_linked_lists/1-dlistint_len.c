#include "lists.h"
/**
 * dlistint_len - returns the number of element in linked list
 * @h: head pointer.
 * Return: number if element.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return i;
}
