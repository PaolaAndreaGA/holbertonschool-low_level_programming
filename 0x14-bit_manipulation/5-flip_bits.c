#include "main.c"

/**
 *flip_bits -  returns the number of bits you would need to flip
 *@n: entry data
 *@m: positions
 *Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, res;

	res = 0;
	for (i = 8 * sizeof(n) - 1; i >= 0; i--)
	{
		if (((n ^ m) >> i) & 1)
			res++;
	}
	return (res);
}
