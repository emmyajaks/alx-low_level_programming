#include "main.h"

/**
 * flip_bits - calculates the number of bits needed to flip to get from n to m
 * @n: the first number
 * @m: the second number
 * Return: the number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exclusive = n ^ m;
	unsigned int count = 0;

	while (exclusive > 0)
	{
		if (exclusive & 1)
			count++;
		exclusive >>= 1;
	}
	return (count);
}
