#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;
	/* */
	for (i = 0; i < 9; i++)
	{
		for (j = 1; j < 10; j++)
		{
			for (k = 1; k < 10; k++)
			{
				if (i != j && i != k && j != k && i < j && j < k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');

					if (i == 7 && j == 8 && k == 9)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	printf("\n");
	return (0);
}
