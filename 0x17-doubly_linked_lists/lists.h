#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: the integer
 * @prev: this points to the previous node
 * @next: this points to the next node
 *
 * Description: doubly linked list node structureZZ
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *i);
size_t dlistint_len(const dlistint_t *i);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **i, unsigned int idx, int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

#endif
