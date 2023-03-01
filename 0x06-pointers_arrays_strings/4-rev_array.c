#include "main.h"
/**
 * reverse_array - this function reverse the content of an array
 * @a: Array of integers
 * @n: number of element
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int tmp, b, c;

	b = 0;
	c = n - 1;

	while (b < c)
	{
		tmp = a[b];
		a[b] = a[c];
		a[c] = tmp;
		b++;
		c--;
	}
}
