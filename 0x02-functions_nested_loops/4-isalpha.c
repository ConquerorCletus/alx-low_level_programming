#include "main.h"
/**
 * _isalpha -checks for alphabets
 * @c:the character to check
 * Return:1 if c is a lowercase else 0
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
