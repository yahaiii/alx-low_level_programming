#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints alphabets in reverse using putchar
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; --c)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
