#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all nautral numbers from n to 98
 *
 * Return: 0 sucess
 *
 */

void print_to_98(int n)
{
	while (n > 98)
	{
		printf("%d,", n);
		printf(" ");
	n--;
	}
	while (n < 98)
	{
		printf("%d,", n);
		printf(" ");
	n++;
	}
	printf("98");
	printf("\n");
}
