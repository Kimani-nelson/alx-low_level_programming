#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - Deletes a node at the given index
 * of a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node to delete.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)

{
	listint_t *prev;
	listint_t *next;
	listint_t *temp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}

	prev = *head;
	next = (*head)->next;
	for (i = 0; i < index - 1; i++)
	{
		if (next == NULL)
			return (-1);

		prev = next;
		next = next->next;
	}

	temp = next->next;
	free(next);
	prev->next = temp;

	return (1);
}
