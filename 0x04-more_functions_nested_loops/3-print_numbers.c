#include "main.h"
/**
 * print_numbers - this function prints number 0 to 9
 * Return:void
 * Date:23 -02-2023
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		_putchar(c);
	_putchar('\n');
}
