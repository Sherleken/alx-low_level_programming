#include "main.h"
#include "math.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1
 * Return: 1 for success, otherwise, -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);

	add = 1 << index;
	*n = *n | add;
	return (1);
}

