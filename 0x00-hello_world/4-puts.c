#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: 'outputs string using puts'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[52];

	strcpy(str, "\"Programming is like building a multilingual puzzle");

	puts(str);

	return (0);
}
