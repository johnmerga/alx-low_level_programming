#include "holberton.h"

/**
 * _strncat -  a function that concatenates two strings.
 * @dest: - input pointer.
 * @src: - input pointer.
 * @n: - input integer.
 * Return: dest.
*/

char *_strncat(char *dest, char *src, int n)
{
	int counter = 0, counter2 = 0;

	while (*(dest + counter) != '\0')
	{
		counter++;
	}
	if (n > 0)
	{
		while (counter2 >= 0)
		{
			if (counter2 == n)
				break;
			*(dest + counter) = *(src + counter2);
			if ((*(src + counter2) == '\0') && (n > counter2))
				break;
			counter2++;
			counter++;
		}
	}
	else
	{
		while (counter2 >= 0)
		{
			*(dest + counter) = *(src + counter2);
			if (*(src + counter2) == '\0')
				break;
			counter2++;
			counter++;
		}
	}

	return (dest);
}
