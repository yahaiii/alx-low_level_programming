#include "main.h"

/**
 * more_numbers - prints 10 times the numbers 0-14
 *
 */
void more_numbers(void)
{
	int i, j, k;
	char rest[] = "1011121314";

	for (i = 0; i < 10; i++)
	{
		for (j = '0'; j <= '9'; j++)
			_putchar(j);

		for (k = 0; k < 10; k++)
			_putchar(rest[k]);
		_putchar('\n');
	}
}
