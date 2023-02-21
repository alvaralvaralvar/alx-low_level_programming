#include "main.h"

/**
  * _isalpha - check for alphabetic order
  * @c: is the char to be checked
  * return: 1 if char, otherwise 0
  */

int _isalpha(int c)
{
	int c;

	if (c >= A && c <= Z)
		return (1);
	{
		if (c >= a && c <= z)
			return (1);
	}
	else
		return (0);
}
