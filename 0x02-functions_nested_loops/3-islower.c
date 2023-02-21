#include "main.h"

/**
  * _islower - checks for lowercase characters
  *
  *Author: Alvar Wakiagi
  *
  */

int _islower(int c)
{
    int result;
    result = 0;

    do {
        if (c >= 'a' && c <= 'z')
        {
            result = 1;
        }
    } while (0);

    return result;
}
