#include <stdio.h>

/**
 * main - Prints two digit como
 *
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i, k, g, h, co1, co2;

	i = k = g = h = 48;
	while (h < 58)
	{
		g = 48;
		while (g < 58)
		{
			k = 48;
			while (k < 58)
			{
				i = 48;
				while (i < 58)
				{
					co1 = (h * 10) + g;
					co2 = (k * 10) + i;
					if (co1 < co2)
					{
						putchar(h);
						putchar(g);
						putchar(' ');
						putchar(k);
						putchar(i);
						if (h == 57 && g == 56 && e == 57 && i == 57)
							break;
						putchar(',');
						putchar(' ');
					}
					i++;
				}
				k++;
			}
			g++;
		}
		h++;
	}
	putchar('\n');

	return (0);
}
