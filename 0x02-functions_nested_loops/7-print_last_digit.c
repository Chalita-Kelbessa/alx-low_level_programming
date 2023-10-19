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

	while (j >= 0)
	{
		_putchar (j + 48);
		return (j);
		while (j < 0)
		{
			_putchar (-j + 48);
			return (-j);
			j--;
		}
		j++;
	}
	return (0);
}
