#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of two digits in C.
 * Numbers must be separated by a comma followed by a space. The two digits must
 * be different. 01 and 10 are considered the same combination of the two digits
 * 0 and 1. Print only the smallest combination of two digits. Numbers should be
 * printed in ascending order, with two digits. Uses the putchar function and
 * does not use variables of type char.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, j;

    for (i = 0; i <= 8; i++)
    {
        for (j = i + 1; j <= 9; j++)
        {
            putchar(i + '0');
            putchar(j + '0');
            if (i < 8)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }

    return (0);
}

