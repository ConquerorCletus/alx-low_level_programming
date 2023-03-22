#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - select the appropriat finction to perform
 * @s: The operator
 * Return: operator
 * Date: 22-03-2023
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);
}
