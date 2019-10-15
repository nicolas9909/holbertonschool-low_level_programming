#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - Prints the array reverse
 * @str: string
 *
 * Return: Nothing
 */

char *_strdup(char *str)
{
	unsigned int i, size;
	char *dest;

	if (str == 0)
	{
		return (0);
	}
	for (size = 0; str[size] != 0; size++)
	{
	}
	dest = malloc(size * sizeof(char));
	if (dest == 0)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
		dest[i] = str[i];
	dest[i] = '\0';
	return (dest);
}
