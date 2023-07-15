#include <stdio.h>
/**
 * main-Entry point
 * Description-'prints all possible different combinations of three digits.'
 * Return:0
 */
int main(void)
{
	int n;
	int w;
	int v;

	for (n = 0; n < 8; n++)
	{
		for (w = n + 1; w < 9; w++)
		{
			for (v = w + 1; v < 10; v++)
			{
				putchar((n % 10) + '0');
				putchar((w % 10) + '0');
				putchar((v % 10) + '0');
				if (n == 7 && w == 8 && v == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
