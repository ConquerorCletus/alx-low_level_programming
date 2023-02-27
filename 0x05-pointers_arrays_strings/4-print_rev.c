#include "main.h"
/**
 * print_rev - This function prints a string in reverse.
 * Return:void
 * @s: The string parameter
 * Date:27-02-2023.
 */
void print_rev(char *s)
{
	int reverse;

	for (reverse = 0; s[reverse] != '\0'; reverse++)
		;
	for (--reverse; reverse >= 0; --reverse)
		_putchar(s[reverse]);
	_putchar('\n');
}
