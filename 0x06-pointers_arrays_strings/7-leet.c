#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 * @str: input string.
 * Return: the pointer to dest.
 * Date:2-03-2023
 */

char *leet(char *str)
{
	int a = 0, i;
	int low_letters[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(str + a) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(str + a) == low_letters[i] || *(str + a) == upp_letters[i])
			{
				*(str + a) = numbers[i];
				break;
			}
		}
		a++;
	}

	return (str);
}
