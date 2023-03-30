#include "lists.h"
/**
 * add_node - adds a new node to single linked list
 * @head: First node of linked list.
 * @str: string to store in the list.
 * Return: address of new element.
 * Date: 30-03-2023
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newElement;
	size_t index;

	newElement = malloc(sizeof(list_t));
	if (newElement == NULL)
		return (NULL);

	newElement->str = strdup(str);

	for (index = 0; str[index]; index++)
		;

	newElement->len = index;
	newElement->next = *head;
	*head = newElement;

	return (*head);
}
