#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This program generates random values as password.
 * Return:0
 * Date:27-02-2023
 */
int main(void)
{
	int code;
	char z;

	srand(time(NULL));
	while (code <= 2645)
	{
		z = rand() % 128;
		sum += z;
		putchar(z);
	}
	putchar(2772 - sum);
	return (0);
}
