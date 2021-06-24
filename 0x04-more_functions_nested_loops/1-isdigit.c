#include "holberton.h"

/**
 * _isdigit - checks for a digit.
 * @c: input value.
 * Return: 1 if it's number.
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
