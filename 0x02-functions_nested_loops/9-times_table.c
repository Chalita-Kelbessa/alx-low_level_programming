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

	for (i = 0; i <= 9; i++)
	{
		if ( i != 0)
		{
			for (j = 0; j <= 9; j++)
			{
				n = i * j;
				_putchar(44);
				_putchar(32);

					if (n <= 9)
					{
						_putchar(32);
						_putchar(n + 48);
					}
					else
					{
						_putchar((n / 10) + 48);
						_putchar((n % 10) + 48);
					}
				}
		}
		_putchar('\n');
	}

}
