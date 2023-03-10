#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that adds integers
 * @argc: argument constant parameter
 * @argv: argument vector parameter
 * Return: 0 or 1
 * Date: 10-03-2023
 */
int main(int argc, char *argv[])
{
	int i, sum;

	{
		printf("Error\n");
		return (1);
	}	
	for (i = 0; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
		printf("%d\n", sum);
	return (0);
}
