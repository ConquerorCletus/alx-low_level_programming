#include <stdio.h>
/**
 * main - This program would print a to z in upper and lowercase.
 * date: 17-02-2023
 * Return: 0 after compilation
 */
int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
{
	putchar(az);
}
for (az = 'A'; az <= 'Z'; az++)
{
	putchar(az);
}
putchar('\n');
return (0);
}

