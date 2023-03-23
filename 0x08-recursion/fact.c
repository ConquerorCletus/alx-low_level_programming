#include <stdio.h>
/**
 * factorial - Function that returns the factorial of a given number.
 * @n: The number to find the factorial of.
 * Return: 0
 * Date:8-03-2023
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n > 0 && n <= 1)
		return (1);
	else if (n > 1)
		return (n * factorial(n - 1));
	return (0);
}
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = factorial(1);
    printf("%d\n", r);
    r = factorial(5);
    printf("%d\n", r);
    r = factorial(10);
    printf("%d\n", r);
    r = factorial(-1024);
    printf("%d\n", r);
    return (0);
}
