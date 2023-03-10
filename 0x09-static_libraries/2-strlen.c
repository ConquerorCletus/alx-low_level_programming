#include "main.h"
/**
 * _strlen - This function returns the length of string.
 * @s:parameter assigned.
 * Return:length of String.
 * Date:27-02-2023.
 */
int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
		a++;
	return (a);
}
