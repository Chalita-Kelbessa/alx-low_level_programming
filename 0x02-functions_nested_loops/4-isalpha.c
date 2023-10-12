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
for (c = 97; c <= 122; c++)
	return (1);
for (c = 0; c < 97; c++)
	return (0);
for (c = 127; c < 127; c--)
	return (0);
return (0);
}
