#include "main.h"
/**
 * _sqrt_recursion - Returns the square root of n
 * @n: input value to find square root of
 * Return: If the number has a natural square root - the square root.
 *         If the number does not have a natural square root - -1.
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(0, n));
}

/**
 * _sqrt - Finds the square root of a number
 * @n: The number to find the square root of.
 * @x: The root to be tested.
 * Return: If the number has a natural square root - the square root.
 *         If the number does not have a natural square root - -1.
 */

int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}
