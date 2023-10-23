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
	
	if (b == 0)
		return a;

	else 
		return (1 + add(a, b-1));
}
