#include <stdio.h>
/**
 * main-Entry point
 * Desciption-'prints all possible combinations of two two-digit numbers.'
 * Return:0
 */
int main(void)
{
	int n;
	int v;

	for (n = 0; n <= 99; n++)
	{
		for (v = 0; v <= 99; v++)
		{
			if (n < v && n != v)
			{
				putchar(n / 10 + '0');
				putchar((n % 10) + '0');
				putchar(' ');
				putchar(v / 10 + '0');
				putchar((v % 10) + '0');
				if (n != 98 || v != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
