#include "holberton.h"
/**
 * main - this C program that prints "Holberton" with _putchar.
 *
 * Return: Always 0.
 */
int main(void)
{
char *b = "Holberton\n";
while (*b)
{
_putchar(*b++);
}
return (0);
}
