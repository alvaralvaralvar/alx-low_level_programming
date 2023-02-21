#include "main.h"

/**
  * void print_alphabet_x10 - prints the alphabet in lowercase ten times
  *
  * Author: Alvar Wakiagi
  *
  */

void print_alphabet_x10(void);
{
	int i = 0, j;

	do {
		j = 97;
		do {
			_putchar(j);
			j++;
		} while (j <= 122);

		_putchar('\n');
		i++;
	} while (i < 10);
}
