#include <stdio.h>
/**
 * main-Entry point
 * Description-print alphabets except e and q
 * Return:0
 */
int main(void)
{
	int w = 97;

	while (w <= 122)
	{
		if (w == 101 || w == 113)
		{
			w++;
		continue;
		}
		putchar(w);
		w++;
	}
	putchar('\n');
	return (0);
}
