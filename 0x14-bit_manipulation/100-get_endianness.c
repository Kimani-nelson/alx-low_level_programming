#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)

{
	unsigned int x = 1;
	char *c = (char *)&x;
	int endianness = 0;

	if (*c == 1)
		endianness = 1; /* little endian */
	else if (*c == 0)
		endianness = 0; /* big endian */

	return (endianness);
}
