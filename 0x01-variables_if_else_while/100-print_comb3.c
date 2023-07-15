#include <stdio.h>
/**
 * main-Entry point
 * Description-'prints all possible different combinations of two digits'
 * Return:0
 */
int main(void)
{
	int n;
	int w;

	for (n = 0; n < 9; n++)
	{
	for (w = n + 1; w < 10; w++)
	{
		putchar((n % 10) + '0');
		putchar((w % 10) + '0');
		if (n == 8 && w == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	}
	return (0);
}
