#include "main.h"
/**
 * set_bit -  function that returns the value of a bit
 * @n: data entry
 * @index: positions to move
 * Return: Always 0.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set = 1 << index;
	*n = *n | set;
	return (1);
}
