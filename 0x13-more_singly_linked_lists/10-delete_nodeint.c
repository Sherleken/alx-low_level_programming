#include "lists.h"

/**
 * delete_nodeint_at_index -deletes a node at index idx
 * of a listint_t linked list
 * @head: First node address.
 * @index: Position of the node to be deleted
 * Return: on success 1; otherwise return -1
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *next;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	current = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (!current->next)
			return (-1);
		current = current->next;
	}
	next = current->next;
	current->next = next->next;
	free(next);
	return (1);
}
