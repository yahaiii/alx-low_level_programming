#include "main.h"

/**
 * _islower - checks if a char is lowercase
 * @c: The character to print
 *
 * Return: On success 1.
 * When char isn't a lowercase letter, 0 is returned.
 */
int _islower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
