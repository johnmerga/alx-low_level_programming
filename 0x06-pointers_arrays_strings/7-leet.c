#include "holberton.h"

/**
 * leet -  a function that encodes a string into 1337.
 * @s: - input pointer.
 * Return: s.
*/

char *leet(char *s)
{
	int count = 0, i;
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == upp_letters[i] || *(s + count) == upp_letters[i] + 32)
			{
				*(s + count) = numbers[i];
				break;
			}
		}
		count++;
	}

	return (s);
}
