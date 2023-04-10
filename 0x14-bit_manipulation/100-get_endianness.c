#include "main.h"
/**
 * get_endianness - A function that indicates endians
 * Return: 0 for big & 1 for little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *endian = (char *)&i;

	if (*endian)
		return (1);
	else
		return (0);
}
