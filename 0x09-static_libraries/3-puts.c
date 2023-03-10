#include "main.h"
/**
 * _puts-prints a string to the standard output
 * Return: void
 * @str:pointer to the string.
 * Date:27-02-2023
 */
void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
