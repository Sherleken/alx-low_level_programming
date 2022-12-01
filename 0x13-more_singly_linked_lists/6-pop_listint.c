#include "lists.h"

/**
 * pop_listint - deletes the head node of listint_t list
 * and return its data (n)
 * @head: pointer to the first node in the listint_n list
 * Return: 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL)
	return (0);

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}

