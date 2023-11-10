#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - generates array
 *
 * @size: size of the array
 * @c: character to store in array
 *
 * Return: pointesr to array
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	ar = malloc(sizeof(char) * size);

	if (ar == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = c;

	return (ar);
}
