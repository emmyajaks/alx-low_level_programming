#include "lists.h"

/**
 * dlistint_len - it returns the number of elements in
 * a double linked list
 *
 * @i: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *i)
{
	int count;

	count = 0;

	if (i == NULL)
		return (count);

	while (i->prev != NULL)
		i = i->prev;

	while (i != NULL)
	{
		count++;
		i = i->next;
	}

	return (count);
}
