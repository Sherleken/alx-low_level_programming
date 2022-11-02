#include "main.h"

/**
 * _memset - fills a block of memory with a constant byte
 * @s: starting memory of the address to be filled
 * @b: desired value
 * @n: number of bytes to be changed
 * Return: changed arrays with newn bytes value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
