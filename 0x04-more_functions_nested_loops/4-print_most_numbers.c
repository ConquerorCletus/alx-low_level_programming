#include "main.h"
/**
 * print_most_numbers - prints number from 0 to 9 excluding 2 & 4.
 * Return:void
 * Date:23-02-2023
 */
void print_most_numbers(void)
{
	for (c = '0'; c <= '9'; c++)
		if (!(c == '2' || c == '4'))
			_putchar(c);
	_putchar('\n');
}
