#include "main.h"
#include <stdio.h>
/**
 * _abs - Entry point
 * Description- Computes absolute value of integer
 * @c:The number to be computed
 * Return: the absolute value of int
 */
int _abs(int c)
{

	if (c >= 0)
	{
		return (c);
	}
	return (-c);
}
