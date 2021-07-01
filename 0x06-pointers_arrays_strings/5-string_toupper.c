#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: - input pointer.
 * Return: s.
*/
char *string_toupper(char *s)
{
	int counter = 0, converter;

	while (*(s + counter) != '\0')
	{
		if ((s[counter] >= 97) && (s[counter] <= 122))
		{
			s[counter] = 90 - (122 - s[counter]);
		}
		counter++;
	}
	return (s);
}
