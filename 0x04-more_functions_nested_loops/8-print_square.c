#include "main.h"
/**
 * print_square - this function primt out squares
 * @size: parameter used
 * Return:void
 * Date:23-02-2023
 */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');

	for (a = 0; a < size; a++)
	{
	for (b = 0; b < (size); b++)
	{
		_putchar('#');
	}
	_putchar('\n');
	}
}
