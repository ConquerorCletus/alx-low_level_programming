#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning
 * of linked list.
 *
 * @head: pointer to head of linked list
 * @n: integer data to be added
 * Return: Address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *addNode;

	addNode = malloc(sizeof(dlistint_t));

	if (addNode == NULL)
		return (NULL);
	addNode->n = n;
	addNode->prev = NULL;
	addNode->next = *head;

	if (*head != NULL)
		(*head)->prev = addNode;
	*head = addNode;
	return (addNode);
}
