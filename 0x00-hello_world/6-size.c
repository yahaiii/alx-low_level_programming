#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: displays the size of various types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char typeChar;
	int typeInt;
	long long int typeLong;
	long long int typeLongLong;
	float typeFloat;

	printf("Size of a char: %zu byte(s)\n", sizeof(typeChar));
	printf("Size of a int: %zu byte(s)\n", sizeof(typeInt));
	printf("Size of a long int: %zu byte(s)\n", sizeof(typeLong));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(typeLongLong));
	printf("Size of a float: %zu byte(s)\n", sizeof(typeFloat));

	return (0);
}
