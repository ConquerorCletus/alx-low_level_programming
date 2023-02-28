#include "main.h"
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

	srand(time(0));
	code = rand();
	printf("%i\n", code);
	return (0);
}
