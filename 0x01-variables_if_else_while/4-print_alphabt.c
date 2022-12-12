#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all letters except q & e
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	}
	putchar('\n');

	return (0);
}
