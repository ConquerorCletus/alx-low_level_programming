#include "main.h"
/**
 * _islower - a function that checks for lowercase
 * @c:the character
 * Return: 1 if lowercase, else 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
