#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: (0) always
 */
int main(void)
{
	int i;
	long int prev = 1, curr = 2, next;

	printf("%ld, %ld", prev, curr);

	for (i = 3; i <= 50; i++)
	{
		next = prev + curr;
		printf(", %ld", next);
		prev = curr;
		curr = next;
	}

	printf("\n");

	return (0);
}
