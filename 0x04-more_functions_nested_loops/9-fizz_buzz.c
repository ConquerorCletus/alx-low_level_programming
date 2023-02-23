#include "main.h"
/**
 * main - This program prints 0 to 100.
 * with fizz,buzz and fizzbuzz in multiple of 3,5 and both.
 * Return:0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
			printf("FizzBuzz ");
		else if (a % 3 == 0)
			printf("Fizz ");
		else if (a % 5 == 0)
			printf("Buzz ");
		else
			printf("%i ", a);
	}
	putchar('\n');
	return (0);
}




