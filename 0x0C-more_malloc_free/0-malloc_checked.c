#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked-allocate memory
 * @b:size of memory to be allocated
 * Return:nothing
 */
void *malloc_checked(unsigned int b)
{
	void *z;

	     z = malloc(b);
	if (z == NULL)
		exit(98);
	return (z);
}
