#include <stdio.h>
/**
 * main - This program prints out the size of various types on the computer
 * Return: 0 after compilation
 */
int main(void)
{
	printf("size of a char:%d byte(s)\n", sizeof(char));
	printf("size of an int:%d byte(s)\n", sizeof(int));
	printf("size of long int:%d byte(s)\n", sizeof(long int));
	printf("size of long long int:%d byte(s)\n", sizeof(long long int));
	printf("size of float: %d byte(s)\n", sizeof(float));
	return (0);
}
