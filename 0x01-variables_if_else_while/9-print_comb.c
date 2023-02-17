#include <stdio.h>
/**
 *main - This program prints combination of the numbers 0-9
 * Return: 0 after compilation
 * Date: 17-02-2023
 */
int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		putchar((char)a);
		if (a != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
