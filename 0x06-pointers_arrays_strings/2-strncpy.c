#include "holberton.h"

/**
 * _strncpy -   a function that copies a string.
 * @dest: - input pointer.
 * @src: - input pointer.
 * @n: - integer input.
 * Return: dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int counter = 0;

	for (; counter < n && src[counter] != '\0'; counter++)
	{
		dest[counter] = src[counter];
	}
	for (; counter < n; counter++)
	{
		dest[counter] = '\0';
	}

	return (dest);
}
