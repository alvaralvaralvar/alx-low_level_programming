#include "main.h"

/**
 * _isdigit - Prints the digit
 * @c: character to be checked
 * Return: last digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
