#include "main.h"
/**
 *binary_to_uint -  converts a binary number to an unsigned int.
 *@b: binary input
 *Return: unsigned integer number.
 */


unsigned int binary_to_uint(const char *b)
{
	int r = 0;
	int j = 0;
	int i = 0;
	int base2 = 1;

	while (b[i] != '\0')
	{
		if (b == NULL || (b[i] != '1' && b[i] != '0'))
		{
			return (0);

		}
	  
	       i++;
	}
	i--;

	for (j = i; j >= 0; j--)
	{
		r = r + ((b[j] - '0') * base2);
		base2 = base2 * 2;
	}
	return (r);
}
