#include "main.h"

/**
 * print_sign - To putch sign of a number
 *
 * @n: any number
 * Return: 0 or 1
 */

int print_sign(int n)
{
while ((n) > 0)
	{
	_putchar(43);
	n++;
	return (+1);
	}
while ((n) < 0)
	{
	_putchar(45);
	n--;
	return (-1);
	}
while (n == 0)
	{
	_putchar(48);
	return (0);
	}
return (0);
}
