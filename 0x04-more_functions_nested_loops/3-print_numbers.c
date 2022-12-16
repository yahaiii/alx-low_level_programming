#include "main.h"

/**
 * print_numbers - prints 0 to 9 with _putchar
 *
 * Return: 0 - 9.
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
