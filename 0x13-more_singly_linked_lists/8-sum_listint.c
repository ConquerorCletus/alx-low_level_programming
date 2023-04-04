#include "lists.h"

/**
 * sum_listint - This function returns the sum of data(n)
 * @head: head pointer
 * Return: sum of data (n).
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
