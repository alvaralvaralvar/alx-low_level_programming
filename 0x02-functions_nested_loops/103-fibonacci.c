#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	long int prev = 1, curr = 2, next;
	long int sum = 2;

	while (curr <= 4000000)
	{
		next = prev + curr;
		if (next % 2 == 0)
		{
			sum += next;
		}
		prev = curr;
		curr = next;
	}

	printf("%ld\n", sum);

	return (0);
}
