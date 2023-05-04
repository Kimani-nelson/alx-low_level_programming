#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * binary_to_uint - Convert a binary string to an unsigned int
 * @b: A pointer to the string containing the binary number
 *
 * Return: The converted number, or 0 if there is an error
 */

unsigned int binary_to_uint(const char *b)

{
	unsigned int num = 0;
	unsigned int bit = 1;
	int i, len;

	if (b == NULL)
		return (0);

	len = strlen(b);

	for (i = len - 1; i >= 0; i--)

	{
		if (b[i] == '1')
			num += bit;
		else if (b[i] != '0')
			return (0);

		bit <<= 1;
	}

	return (num);
}
