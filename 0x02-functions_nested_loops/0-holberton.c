#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *salut = "Holberton";
	/** looping the word **/
	while (*salut)
	{
		_putchar(*salut);
		salut++;
	}
	_putchar('\n');
	return (0);
}

