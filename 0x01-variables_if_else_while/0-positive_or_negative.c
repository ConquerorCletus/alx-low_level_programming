#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This program would make use of if and else if.
 * Return: 0 aftr success compilation
 * date: 17-02-2023
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive \n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero \n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative \n", n);
	}
	return (0);
}

