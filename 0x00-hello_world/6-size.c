#include <stdio.h>
/**
 * main - this program prints out the size of primitive characters
 * Return: 0 after compilation
 */
int main(void)
{
	printf("size of a char:%ld byte(s)\n", sizeof(char));
	printf("size of an int:%ld byte(s)\n", sizeof(int));
	printf("size of a long int:%ld byte(s)\n", sizeof(long int));
	printf("size of a long long int:%ld byte(s)\n", sizeof(long long int));
	printf("size of a float:%ld byte(s)\n", sizeof(float));
	return (0);
}
