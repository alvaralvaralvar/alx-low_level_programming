#include "main.h"

/**
 * print_most_numbers - Prints most numbers
 * Return: last digit.
 */

void print_most_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		if (c == 2 || c == 4)
			continue;
	_putchar(c + '0');
	}
	_putchar('\n');
}
