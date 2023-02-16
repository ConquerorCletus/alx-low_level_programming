#include <stdio.h>
/**
 * main - This program prints out the size of various types on the computer
 * Return: 0 after compilation
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	printf("size of a char:%lu byte(s)\n", sizeof(a));
	printf("size of an int:%lu byte(s)\n", sizeof(b));
	printf("size of long int:%lu byte(s)\n", sizeof(c));
	printf("size of long long int:%lu byte(s)\n", sizeof(d));
	printf("size of float: %lu byte(s)\n", sizeof(e));
	return (0);
}
