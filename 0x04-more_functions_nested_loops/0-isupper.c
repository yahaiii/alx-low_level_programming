#include "main.h"

/**
 * _isupper - checks if a char is uppercase
 * @c: The character to print
 *
 * Return: On success 1.
 * When char isn't a lowercase letter, 0 is returned.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
