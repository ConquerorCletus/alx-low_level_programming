#include "lists.h"

/**
* add_dnodeint_end - Adds a new node at the end of linked list.
* @head: Pointer to the head of the list.
* @n: Value stored in list.
* Return: Address of the new element otherwise NULL.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *addNode = malloc(sizeof(dlistint_t));
dlistint_t *temp = *head;

if (addNode == NULL)
return (NULL);

addNode->n = n;
addNode->next = NULL;

if (*head == NULL)
{
addNode->prev = NULL;
*head = addNode;
}
else
{
while (temp->next != NULL)
temp = temp->next;

temp->next = addNode;
addNode->prev = temp;
}

return (addNode);
}
