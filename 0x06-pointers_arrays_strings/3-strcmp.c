#include "holberton.h"

/**
 * _strcmp -   a function that compares two strings.
 * @s1: - input pointer.
 * @s2: - input pointer.
 * Return: num.
*/

int _strcmp(char *s1, char *s2)
{
	int counter = 0, num1, num2;

	for (; counter >= 0; counter++)
	{
		if (s1[counter] == s2[counter] && s1[counter] != '\0' && s2[counter] != '\0')
			continue;
		else if (s1[counter] != s2[counter])
		{
			num1 = s1[counter];
			num2 = s2[counter];

			if (num1 > num2)
				return (num1 - num2);
			else
				return ((num2 - num1) * -1);
			break;
		}
		else
			break;
	}
}
