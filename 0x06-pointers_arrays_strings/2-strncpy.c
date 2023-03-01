#include "main.h"
/**
 * _strncpy - This function copies a string
 * @dest: Destination of copied string
 * @src:source of string
 * @n: number of bytes.
 * Return: dest
 * Date: 1-03-2023
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}

