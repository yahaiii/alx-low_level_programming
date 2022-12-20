#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints string in reverse
 * @s: string to be reversed
 *
 */
void print_rev(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}
	counter--;
	while (counter >= 0)
	{
		_putchar(s[counter]);
		counter--;
	}
	_putchar('\n');
}
