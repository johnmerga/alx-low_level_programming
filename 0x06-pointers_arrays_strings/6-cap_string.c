#include "holberton.h"

/**
 * cap_string -  a function that capitalizes all words of a string.
 * @s: - input pointer.
 * Return: s.
*/

char *cap_string(char *s)
{
	int separeter[] = {9, 32, 92, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int counter = 0, i;

	for (; counter >= 0 && (*(s + counter) != '\0'); counter++)
	{
		for (i = 0; i < 13; i++)
		{
			if (s[counter] == separeter[i])
			{
				if ((s[counter + 1] >= 97) && (s[counter + 1] <= 122))
				{
					s[counter + 1] = 90 - (122 - s[counter + 1]);
				}
				i++;
			}
		}
	}
	return (s);
}
