#include "holberton.h"

/**
 * puts_half - writes the character c to stdout
 * @str: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void puts_half(char *str)
{
	int i = 0;
	int len = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		len= i / 2;
	}
	else
	{
		len= ((i + 1) / 2);
	}
	while (len <= i)
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
