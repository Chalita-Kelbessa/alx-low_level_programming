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
	int n;

	n = a + b;
	
	if (n > 9) 
	{
		_putchar((n /10)  + 48);
		_putchar((n % 10) + 48);
	}
	return (0);
}

