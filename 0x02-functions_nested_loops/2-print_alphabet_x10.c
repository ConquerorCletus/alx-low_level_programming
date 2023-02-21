#include "main.h"
/**
 * print_alphabet_x10 - This function prints the alphabet 10 times in lowercase
 * Date:21-02-2023
 */
void print_alphabet_x10(void)
{
	char az;
	int b;

	b = 0;

	while (b < 10)
	{
		az = 'a';
		while (az <= 'z')
		{
			_putchar(az);
			az++;
		}
		_putchar('\n');
		b++;
	}
}
