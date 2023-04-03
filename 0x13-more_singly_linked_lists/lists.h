#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* Structure for a singly-linked list of integers */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/* Prints all the elements of a listint_t list */
size_t print_listint(const listint_t *h);

/* Returns the number of elements in a linked listint_t list */
size_t listint_len(const listint_t *h);

/* Adds a new node at the beginning of a listint_t list */
listint_t *add_nodeint(listint_t **head, const int n);

/* Adds a new node at the end of a listint_t list */
listint_t *add_nodeint_end(listint_t **head, const int n);

/* Frees a listint_t list */
void free_listint(listint_t *head);

/* Frees a listint_t list and sets the head to NULL */
void free_listint2(listint_t **head);

/* Deletes the head node of a listint_t list and returns its data */
int pop_listint(listint_t **head);

/* Returns the nth node of a listint_t list */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/* Returns the sum of all the data (n) of a listint_t list */
int sum_listint(listint_t *head);

/* Inserts a new node at a given position */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

/* Deletes the node at a given position */
int delete_nodeint_at_index(listint_t **head, unsigned int index);

/* Reverses a listint_t list */
listint_t *reverse_listint(listint_t **head);

/* Prints all the elements of a listint_t list (safe version) */
size_t print_listint_safe(const listint_t *head);

/* Frees a listint_t list (safe version) */
size_t free_listint_safe(listint_t **h);

/* Finds the loop in a linked list (if it exists) */
listint_t *find_listint_loop(listint_t *head);

/* Prints a single character */
int _putchar(char c);

#endif /* LISTS_H */
