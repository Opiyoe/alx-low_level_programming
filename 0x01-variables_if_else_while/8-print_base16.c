#include <stdio.h>
/**
 * main-Entry point
 * Description-print numbers of base 16
 * Retun :0
 */
int main(void)
{
	int n;
	int w;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (w = 97; w <= 102; w++)
	{
		putchar(w);
	}
	putchar('\n');
	return (0);
}
