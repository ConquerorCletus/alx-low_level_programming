#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * @head: first of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 * Date: 30-03-2023
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newElement, *temp;
	size_t index;

	newElement = malloc(sizeof(list_t));
	if (newElement == NULL)
		return (NULL);

	newElement->str = strdup(str);

	for (index = 0; str[index]; index++)
		;

	newElement->len = index;
	newElement->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = newElement;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newElement;
	}

	return (*head);
}
