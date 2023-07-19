#include "main.h"
#include <stdio.h>
/**
 * _abs - Checks the code
 * @c:The number to be checked.
 * return: Abslute value of number or zero
 */
int _abs(int c)
{
	int c;

	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
