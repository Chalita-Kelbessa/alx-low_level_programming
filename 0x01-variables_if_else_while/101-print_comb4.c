#include <stdio.h>

/**
 * main - Prints number is 3 digit comb
 *
 * Return: 0 Success
 */

int main(void)
{
	int i, g, k;

	i = 48;
	g = 48;
	k = 48;

	while (g < 58)
	{
		i = 48;
		while (i < 58)
		{
			k = 48;

			while (k < 58)
			{
				if (g != i && g != k && i != k && g < i && i < k)
				{
					putchar(k);
					putchar(i);
					putchar(g);
					if (i == 56 && g == 55 && k == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			i++;
		}
		g++;
	}

	putchar('\n');

	return (0);
}
