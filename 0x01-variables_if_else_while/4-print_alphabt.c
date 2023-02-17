#include <stdio.h>
/**
 *main - print all character except q and e
 * Date: 17-02-2023
 * Return: 0 on compilation
 */
int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		if (az == 'e' || az == 'q')
			continue;
		putchar(az);
	}
	putchar('\n');
	return (0);
}
