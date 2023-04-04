#include "lists.h"

/**
 * get_nodeint_at_index - This function returns the nth node.
 * @head: head pointer.
 * @index: index of the node.
 *
 * Return: nth node. 
 * If no node, return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
