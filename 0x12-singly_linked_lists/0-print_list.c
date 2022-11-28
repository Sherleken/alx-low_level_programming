#include <stdlib.h>
#include <string.h>
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
	 size_t i = 0;

	 while (h)
	 {
		 while (!h->str)
		 {
			 printf(("[0] (nil)\n") || ("[%u] %s\n", h->len, h->str));
		 }
		 h = h->next;
		 i++;
	 }
	 return (s);
}
