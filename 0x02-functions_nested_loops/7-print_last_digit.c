#include "main.h"

/**
 * print_last_digit - last digit of a number
 *
 * @n: any number
 *
 * Return: 0
 *
 */

int print_last_digit(int n)
{
	int j;

	j = n % 10;

	if (j < 0)
	{
		_putchar(-j);
		return (-1);
	}
	else
	{
		_putchar(j);
		return (1);
	}
return (0);
}