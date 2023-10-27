#include <stdio.h>

/**
 * main - add mutiples of 3 or 5
 *
 *
 *
 * Return: 0 success
 *
 */


int main()
{
	int i;

	for (i = 0; i <= 1024; i++)
		if ((i % 3) || (i % 5))
			printf("%d", i);
	return (0);
}
