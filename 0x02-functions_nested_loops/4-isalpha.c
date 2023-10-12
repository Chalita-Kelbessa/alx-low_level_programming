#include "main.h"

/**
 * _isalpha - checks for letters
 * @c: is ASCII character
 *
 * Return: 1 success
 *
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (0);
	else
		return (1);

	_putchar('\n');
}
