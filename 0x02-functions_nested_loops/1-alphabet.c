#include "main.h"
/**
 * print alphabet-print the alphabets in lowercase
 * description ' prints the alphabet, in lowercase, followed by a new line.'
 * Return:void
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
