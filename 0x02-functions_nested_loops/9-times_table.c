#include "main.h"

/**
 * times_table - prints 9 times table
 *
 * Return: void
 *
 */

void times_table(void)
{
	int i; 
	int j; 
	int n;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			n = i * j;
			_putchar(n);
			_putchar(44);
			_putchar(9);
		}
		_putchar('\n');
	}

}
