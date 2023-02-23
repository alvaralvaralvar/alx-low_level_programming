#include "main.h"

/**
 * _isdigit - checks if c is a digit
 * @c - the character to be checked
 * return: 1 if c is a digit, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	} else
	{
		return (0);
	}
}
