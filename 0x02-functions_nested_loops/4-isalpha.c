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
	if (c >= 97 && c <= 122)

		return (1);

	if (c >= 65 && c <= 90)
		return (1);

	else

		return (0);

	_putchar('\n');
}
