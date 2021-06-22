#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *salut = "Holberton";
	while (*salut)
	{
		putchar(*salut);
		salut++;
		}
	putchar('\n');
	return (0);
}