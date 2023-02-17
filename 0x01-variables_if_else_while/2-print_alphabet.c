#include <stdio.h>
/**
 *main-This program would print all alphabets from a to z.
 * date:17-02-2023
 * Return:0 after compilation
 */
int main(void)
{
	char az;

	for (az = 'a' ; az <= 'z' ; az++)
	{
		putchar(az);
	}
	putchar('\n');
	return (0);
}
