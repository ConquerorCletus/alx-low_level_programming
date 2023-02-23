#include "main.h"
/**
 * print_diagonal - this function draws a diagonal on terminal
 * @n:the parameter used
 * Return: nothing hence void.
 * Date:23-02-2023
 */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
		_putchar('\n');
	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
