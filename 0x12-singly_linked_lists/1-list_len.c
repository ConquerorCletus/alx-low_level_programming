#include "lists.h"
/**
 * list_len - returns then number of elements in a list.
 * @h: linked list pointer.
 * Return: number of elements in the list.
 * Date: 30-03 -2023
 */

size_t list_len(const list_t *h)
{
	size_t noOfelement;

	noOfelement = 0;
	while (h != NULL)
	{
		h = h->next;
		noOfelement++;
	}
	return (noOfelement);
}
