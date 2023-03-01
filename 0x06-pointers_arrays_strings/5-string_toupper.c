#include "main.h"
/**
 * string_toupper - this function changes the content of a string to uppercase
 * @str: string to change
 * Return: a pointer to uppercase str
 * Date: 01-03-2023
 */
char *string_toupper(char *str)
{
	int a;

	for (a = 0; str[a]; a++)
		if (str[a] >= 97 && str[a] <= 122)
			str[a] = str[a] - 32;
	return (str);
}
