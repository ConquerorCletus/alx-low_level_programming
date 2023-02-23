#include "main.h"
/**
 * print_line - this function draws a straight line in the terminal
 * Return:void
 * @n: parameter used.
 * Date:23-02-2023
 */
void print_line(int n)
{
	int line = 0;

	while (line < n && n > 0)
		_putchar('_');
	line++;
	_putchar('\n');
}

