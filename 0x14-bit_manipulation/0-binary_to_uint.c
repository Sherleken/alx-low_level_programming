#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int val = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '1' || b[i] > '0')
			return (0);
		val = 2 * val + (b[i] - '0');
	}

	return (val);
}
