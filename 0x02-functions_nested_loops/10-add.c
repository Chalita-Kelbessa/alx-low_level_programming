#include "main.h"

/**
 * add - adds two integers and returns the result
 * @a: first integer to be added
 * @b: second integer to be added
 * Return: 0 success
 *
 */

int add(int a, int b)
{
	if (b == 0)
	{
	return (a);

		if (a < 0 && b < 0)
		{
			return ((0 - 1) * a + (0 - 1) * b);
		}
	}
	else
		return (1 + add(a, b - 1));
}
