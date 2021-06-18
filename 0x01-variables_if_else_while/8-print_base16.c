#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int e;
	/* printing 1-9 */
	for (e = 0; e < 10; e++)
	{
		putchar(e + '0');
	}
	/* print small letters alphabets a-f */
	for (e = 97; e <= 102; e++)
	{
		putchar(e);
	}
	putchar('\n');
	return (0);
}
