#include "main.h"
#include <stdio.h>
/**
 * _isupper - This function shows if its program is in uppercase
 * @c: The parameter for the function
 * Return:if upoercase 1 else 0.                 */
int _isupper(int c)
{
        if (c >= 'A' && c <= 'Z')
                return (1);
        else
                return (0);
}
int main(void)
{
    char c;

    c = 'b';
    printf("%c: %d\n", c, _isupper(c));
    c = '1';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
