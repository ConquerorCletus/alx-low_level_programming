#include "main.h"
 /**
  * _sqrt_recursion - This function returns the square root of n
  * Date:8-03-2023
  * @n: input value
  * Return: If the number has a natural square root - the square root.
 If the number does not have a natural square root - -1 
  */ 
  
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(0, n));
}
  
/**
* _sqrt - Finds the square root of a number
* @n: The input value.
* @x: The root to be tested
* Return: If the number has a natural square root - the square root
 If the number does not have a natural square root - -1.
  */ 
  
int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}
