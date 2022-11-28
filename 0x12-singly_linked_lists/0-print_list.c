#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * Return: the number of nodes
 * If str is NULL, print [0] (nil)
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
	size_t s;

	for (s = 0; h; s++)
	{
	printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	}

	return (s);
}
