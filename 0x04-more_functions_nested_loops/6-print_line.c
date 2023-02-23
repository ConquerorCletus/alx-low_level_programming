#include "main.h"
/**
 * print_line - this function draws a straight line in the terminal
 * Return:void
 * @n: parameter used.
 * Date:23-02-2023
 */
void print_line(int n)
{
	int line = 1;

	for (line = 1; line <= n; line++)
	{
		if (n <= 0)
			_putchar('\n');
		else
			_putchar('_');
	}
	_putchar('\n');
}
