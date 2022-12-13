#include "main.h"

/**
 * main - print alphabet
 *
 * Return: Always 0
 */
void print_alphabet()
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
}
