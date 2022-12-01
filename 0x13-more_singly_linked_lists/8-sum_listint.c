#include "lists.h"

/**
 * sum_listint - calculates the sum of all data(n) in a listint_t list
 * @head: first node in the linked list
 * Return: sum of data (n)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + (head->n);
		head = head->next;
	}

	return (sum);
}

