#include "holberton.h"
/**
 * _isdigit - checks if the character is upperCase
 * @c: input value
 * Return: 1 if it's UpperCase
*/
int _isdigit(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
