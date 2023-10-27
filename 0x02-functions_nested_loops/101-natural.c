#include <stdio.h>

/**
 * main - add mutiples of 3 or 5
 *
 *
 *
 * Return: 0 success
 *
 */


int main(void)
{
	int i, sum = 0;

	for (i = 0; i <= 1024; i++)
	{
		sum = sum + i;

		if ((i % 3) || (i % 5))

			printf("%d", sum);
	}
	return (0);
}
