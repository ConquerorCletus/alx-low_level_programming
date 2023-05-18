#include "lists.h"
/**
 * sum_dlistint - sums data of linked list
 * @head: pointer to the head of linked list
 * Return: sum otherwise 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
