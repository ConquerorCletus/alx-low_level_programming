#include "main.h"
/**
 * print_times_table-This function prints the multiplication table
 * @n: The number multiplied
 * Return:0 void
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n <= 15 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
			{
				_putchar(',');
				_putchar(' ');
				c = a * b;
				if (c <= 99)
					_putchar(' ');
				if (c <= 9)
					_putchar(' ');
				if (c >= 100)
				{
					_putchar((c / 100) + '0');
					_putchar((a / 10) % 10 + '0');
							}
else if (c <= 99 && c >= 10)
{
_putchar((c / 10) + '0');
}
_putchar((c % 10) + '0');
}
_putchar('\n');
}
}
}
