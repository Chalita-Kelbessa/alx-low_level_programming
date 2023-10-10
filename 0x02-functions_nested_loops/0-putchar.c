#include <stdio.h>
#include "main.h"

/**
 * main - program prints putchar
 *
 * Return: 0 Success
 *
 */

int main(void)
{
	char str[15] = "_putchar";

	printf("%s\n", str);

	fprintf(stderr, "[Anything\n]");
	return (0);
}
