#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: string pointer
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		counter++;
		s++;
	}
	return (counter);
}
