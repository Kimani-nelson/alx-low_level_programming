#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list, safely
 * @head: pointer to the beginning of the list
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)

{
	size_t count = 0;
	const listint_t *check = head, *comp;

	while (check != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)check, check->n);
		check = check->next;
		comp = head;
		while (comp != check)
		{
			if (comp == check)
				return (count);
			comp = comp->next;
		}
	}
	return (count);
}
