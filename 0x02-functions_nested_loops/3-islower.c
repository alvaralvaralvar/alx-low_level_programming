#include "main.h"

/**
  * _islower - checks for lowercase character
  *
  * @c: character to be checked*
  *
  * return 1 if lowercase, otherwise 0
  *
  * Author: Alvar Wakiagi
  *
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
