#include "main.h"
/**
 * rev_string - This function reverse a string.
 * Return:void
 * @s: The string parameter
 * Date:27-02-2023
 */
void rev_string(char *s)
{
	int a, b;
	char cd;

	for (a = 0; s[a] != '\0'; ++a)
		;
	for (b = 0; b < a / 2; ++b)
	{
		cd = s[b];
		s[b] = s[a - 1 - b];
		s[a - 1 - b] = cd;
	}
}
