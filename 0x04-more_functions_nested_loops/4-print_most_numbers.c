#include "main.h"

/**
 * print_numbers - prints 0 to 9 with _putchar, ignore 2&4
 *
 * Return: 0 - 9, minus 2&4
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
