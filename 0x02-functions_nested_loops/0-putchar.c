#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main - program prints putchar
 *
 * Return: 0 Success
 *
 */

int main(void)

{

	char str[100] = "_putchar";

	for (int i = 0; i < strlen(str); i++)
	{
		putchar (str[i]);
	}

	return (0);
}


