#include "holberton.h"

/**
 * _puts -  a function that prints a string, followed by a new line, to stdout.
 * @str: pointer input.
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
