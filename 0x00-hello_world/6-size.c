#include <stdio.h>
/**
 * main - This program prints out the size of various types on the computer
 * Return: 0 after compilation
 */
int main(void)
{
	printf("size of a char:%zu byte(s)\n", sizeof(char));
	printf("size of an int:%zu byte(s)\n", sizeof(int));
	printf("size of long int:%zu byte(s)\n", sizeof(long int));
	printf("size of long long int:%zu byte(s)\n", sizeof(long long int));
	printf("size of float: %zu byte(s)\n", sizeof(float));
	return (0);
}
