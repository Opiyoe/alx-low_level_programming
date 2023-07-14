#include <stdio.h>
/**
 * main-Entry point
 * Description-print lowerase then uppercase
 * Return:0
 */
int main(void)
{
	int n = 97;
	int w = 65;

	while (n <= 122)
	{
		putchar(n);
	}
	while (w <= 90)
	{
		putchar(w);
	}
	putchar('\n');
	return (0);
}
