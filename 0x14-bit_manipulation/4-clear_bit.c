#include "main.h"
/**
 * clear_bit - that sets the value of a bit to 0 at a given index.
 *  at a given index.
 * @n: data entry
 * @index: positions to move
 * Return: Always 0.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}

	set = ~(1 << index);
	*n = *n & set;
	return (1);
}
