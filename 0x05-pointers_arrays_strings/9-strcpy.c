#include "main.h"
/**
 * _strcpy - this function copies one string from one pointer to another
 * including terminating null byte
 * @dest:destination of string
 * @src:source of string parameters
 * Return:pointer to dest input.
 * Date:27-02-2023
 */
char *_strcpy(char *dest, char *src)
{
	int a, b = 0;

	for (a = 0; src[a] != '\0'; ++a)
	{
		dest[b] = src[q];
		b++;
	}
	dest[b] = '\0';
	return (dest);
}
