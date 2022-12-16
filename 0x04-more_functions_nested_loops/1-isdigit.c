#include "main.h"

/**
 * _isdigit - checks if a char is a digit, 0 - 9
 * @c: The character to check
 *
 * Return: On success 1.
 * When char isn't a digit, 0 is returned.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
