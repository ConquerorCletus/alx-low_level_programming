#include "main.h"
/**
 * swap_int - This function swap the value of 2 integers.
 * @a:parameter assigned.
 * @b:parameter assigned.
 * Return:void
 * Date:27 -02 -2023.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
