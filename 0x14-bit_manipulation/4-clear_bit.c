#include "main.h"

/**
 * clear_bit - clears the value of a bit to 0 at a given index
 * @n: the pointer to the number to modify
 * @index: the index of the bit to clear (starting from 0)
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
