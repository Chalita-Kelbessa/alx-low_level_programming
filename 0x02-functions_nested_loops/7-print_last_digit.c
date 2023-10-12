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
	while ((n % 10) > 0)
		_putchar (n % 10);

	return (0);
}
