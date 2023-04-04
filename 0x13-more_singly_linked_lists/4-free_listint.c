#include "lists.h"
/**
 * free_listint - a function that frees a linked list
 * @head: head of a list.
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *freeNode;

	while ((freeNode = head) != NULL)
	{
		head = head->next;
		free(freeNode);
	}
}
