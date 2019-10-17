#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - check the code for Holberton School students.
 * @size: size of the lenght
 * @nmemb: int
 *
 *Return: Always 0.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;

	if (!nmemb || !size)
		return (NULL);

	a = malloc(nmemb * size);

	if (!a)
		return (NULL);

	return (a);
}
