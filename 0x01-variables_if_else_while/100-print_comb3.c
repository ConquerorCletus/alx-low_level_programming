#include <stdio.h>
/**
 * main - This program prints combination of two digits
 * Return:0 after compiling
 *Date: 17-02-2023
 */
int main(void)
{
	int num1, num2;

	for (num1 = 48; num1 <= 56; num1++)
	{
		for (num2 = num1 + 1; num2 <= 57; num2++)
		{
			putchar((char)num1);
			putchar((char)num2);
			if (num1 != 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
		putchar('\n');
		return (0);
}
