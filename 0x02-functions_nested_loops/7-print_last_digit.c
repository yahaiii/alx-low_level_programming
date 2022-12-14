#include "main.h"

/**
 * print_last_digit - prints last digit of n
 * @n: int passed to func
 *
 * Return: last digit.
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}

	_putchar(48 + last_digit);

	return (last_digit);
}
