#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 selectively
 *
 * Return: ; success 0
 *
 */

void print_most_numbers(void)
{
	int i;

	for (i = 47; i <= 57; i++)
		if (i == 52 && i == 50)
		_putchar(!i);

		else
		_putchar(i);
	_putchar('\n');
}
