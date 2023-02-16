#include <stdio.h>
#include <unistd.h>
/**
 * main - this program prints what is in quote without printf amd put
 * Return: 1 is returneed after compilation
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
