#include "main.h"

/**
 * print_alphabet - Prints lowercase letters
 *
 * successs no return function
 * Return: void
 */

void print_alphabet(void)
{
	int x;

	for (x = 97; x <= 122; x++)
	{
		_putchar(x);
	}

	_putchar('\n');
}
