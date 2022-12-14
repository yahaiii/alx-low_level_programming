#include "main.h"

/**
 * _abs - |n|, drops cardinality, prints abs of int
 * @n: The int to be striped.
 *
 * Return: The absolute value of the integer.
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
