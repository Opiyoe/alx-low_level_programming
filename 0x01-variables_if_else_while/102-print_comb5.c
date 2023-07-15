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

	for (n = 0; n < 99; n++)
	{
		for (v = n + 1; v < 100; v++)
		{
			putchar(n / 10 + '0');
			putchar((n % 10) + '0');
			putchar(' ');
			putchar(v / 10 + '0');
			putchar((v % 10) + '0');
			if (n == 99 && v == 98)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
