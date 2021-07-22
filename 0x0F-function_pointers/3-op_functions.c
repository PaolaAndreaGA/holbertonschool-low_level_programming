#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *op_add - add function
 *@a: number integer
 *@b: numberinteger
 *Return: Operation result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - substraction function
 *@a: number integer
 *@b: numberinteger
 *Return: Operation result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplication function
 *@a: number integer
 *@b: numberinteger
 *Return: Operation result
 */

int op_mul(int a, int b)

{
	return (a * b);
}

/**
 *op_div- division function
 *@a: number integer
 *@b: numberinteger
 *Return: Operation result
 */

int op_div(int a, int b)
{

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}


/**
 *op_mod - module function
 *@a: number integer
 *@b: number integer
 *Return: Operation result
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);

}
