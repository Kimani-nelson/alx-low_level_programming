#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: double pointer to the beginning of the list
 *
 * Description: This function frees a listint_t list.
 *              It sets the head to NULL.
 */

void free_listint2(listint_t **head)

{
	listint_t *current, *next;

	if (head == NULL || *head == NULL)
	return;

	current = *head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
