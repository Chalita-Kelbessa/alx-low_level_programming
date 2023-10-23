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
	for (; n < 98; n++)
		printf("%d,/t", n);
	for (; n > 98; n--)
		printf("%d,/t", n);
}
