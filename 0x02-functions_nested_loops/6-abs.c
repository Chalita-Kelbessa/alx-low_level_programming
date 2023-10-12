#include "main.h"

/**
 * _abs - computes absolute value of an integer
 *
 * @i: integer
 *
 * Return: always positive
 */

int _abs(int i)
{
	if (i >= 0)
		return (i);
	else
		return (i * -1);
	return (0);
}
