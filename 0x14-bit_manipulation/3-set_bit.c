#include "main.h"
/**
 * set_bit - This  function set the value of a bit
 * to 1 at a given index
 * @n: unsigned long int parameter
 * @index: unsigned int parameter for index
 * Return: 1 if successful other wise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n |= (1 << index);
	return (1);
}
