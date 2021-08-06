#include "main.h"
/**
 *binary_to_uint -  converts a binary number to an unsigned int.
 *@b: binary input
 *Return: unsigned integer number.
 */


unsigned int binary_to_uint(const char *b)
{
	int r = 0;
	int i = 0;
	int base2 = 1;


	if  (b == NULL)
	{
		return (0);

	}

	while (b[i] != '\0')
	{

		i++;
	}


	for (i -= 1; i >= 0; i--)
	{
		if  (b[i] != '1' && b[i] != '0')
		{
			return (0);

		}

		r = r + ((b[i] - '0') * base2);
		base2 = base2 * 2;
	}
	return (r);
}
