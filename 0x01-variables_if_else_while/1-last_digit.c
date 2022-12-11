#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: generates random num, save in var, prints last digit
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int lasDgt;
	/* lasDgt is last Digit */

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lasDgt = n % 10;
	if (lasDgt > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lasDgt);
	}
	if (lasDgt == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lasDgt);
	}
	if (lasDgt < 6 && lasDgt != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lasDgt);
	return (0);
}
