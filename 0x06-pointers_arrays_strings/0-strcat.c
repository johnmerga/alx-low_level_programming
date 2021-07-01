#include "holberton.h"

/**
 * _strcat -  a function that concatenates two strings.
 * @dest: - input pointer.
 * @src: - input pointer.
 * Return: dest.
*/

char *_strcat(char *dest, char *src)
{
	int counter = 0, counter2 = 0;

	while (*(dest + counter) != '\0')
	{
		counter++;
	}
	while (counter2 >= 0)
	{
		*(dest + counter) = *(src + counter2);
		if (*(src + counter2) == '\0')
			break;
		counter2++;
		counter++;
	}

	return (dest);
}
