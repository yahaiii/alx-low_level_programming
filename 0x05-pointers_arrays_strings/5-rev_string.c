#include "main.h"

/**
 * rev_string -takes string, reverse order of chars
 * @s: a string
 *
 */
void rev_string(char *s)
{
	int length = 0;
	char *start, *end, temp;

	/* Determine the size of the input string */
	while (*(s + length) != '\0')
		length++;

	/* Set pointers at beginning & end of string */
	start = s;
	end = s + length - 1;

	/* Print from 'end' to 'start', to reverse */
	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
