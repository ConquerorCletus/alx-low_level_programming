#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - This program does simple operations
 * @argc: argument count parameter
 * @argv: argument vector parameter
 * Return: 0
 * Date: 22-03-2023
 *
 */
int main(int argc, char **argv)
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("wrong Input\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != 0)
	{
		printf("wrong input\n");
		exit(99);
	}
	if ((*op == '%' && num2 == 0) || (*op == '/' && num2 == 0))
	{
		printf("Wrong input\n");
		exit(100);
	}
	printf("%d\n", (get_op_func)(op)(num1, num2));
	return (0);
}
