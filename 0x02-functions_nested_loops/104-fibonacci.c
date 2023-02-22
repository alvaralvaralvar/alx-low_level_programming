#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	unsigned int prev = 1, curr = 2, next;

	printf("%u, %u", prev, curr);

	for (count = 2; count < 98; count++)

	{
		next = prev + curr;
		printf(", %u", next);
		prev = curr;
		curr = next;
	}

	printf("\n");

	return (0);
}
