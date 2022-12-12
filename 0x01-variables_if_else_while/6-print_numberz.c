#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints single digit int using putchar
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; ++i)
	{
		putchar(48 + i);
	}
	putchar('\n');

	return (0);
}
