#include "main.h"
#include <stdio.h>
/**
 * print_array - This functions prints the element of an array
 * @a: the string parameter
 * @n:number of element of an array
 *Return:void
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; ++b)
	{
		if (b != (n - 1))
			printf("%d, ", a[b]);
		else
			printf("%d, ", a[b]);
	}
	printf("\n");
}
