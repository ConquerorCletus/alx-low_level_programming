#include <stdio.h>
/**
 *main - This program print all numbers of base 16
 * Date: 17-02-2023
 * Return: 0 after compilation
 */
int main(void)
{
	char af;

	for (af = '0'; af <= '9'; af++)
		putchar(af);
	for (af = 'a'; af <= 'f'; af++)
		putchar(af);
	putchar('\n');
	return (0);
}
