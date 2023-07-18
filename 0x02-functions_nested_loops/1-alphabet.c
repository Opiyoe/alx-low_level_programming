#include "main.h"
/**
 * print alphabet-print the alphabets in lowercase
 * Return:0
 */
void print_alphabet(void)
{
	char v;

	for (v = 97; v <= 122; v++)
	{
		_putchar(v);
	}
	_putchar('\n');
}
