#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 *
 *
 * Return:  void success
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j < 15; j++)
			_putchar (j);
	}
	_putchar(i);

	_putchar('\n');
}
