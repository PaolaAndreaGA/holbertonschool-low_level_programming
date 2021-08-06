#include "main.h"

/**
 *print_binary - prints the binary representation of a number.
 *@n:entry number
 *Return: nothing
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	if ((n & (1 << index)) == 0)
	{
		return (0);
	}

	return (1);
}       	
		
