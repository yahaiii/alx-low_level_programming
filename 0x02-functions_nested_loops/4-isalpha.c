#include "main.h"

/**
 * _isalpha - checks if a char is an alphabet
 * @c: The character to print
 *
 * Return: On success 1.
 * When char isn't a lowercase letter, 0 is returned.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
