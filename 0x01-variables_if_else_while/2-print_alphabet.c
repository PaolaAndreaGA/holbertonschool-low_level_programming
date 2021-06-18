#include <stdio.h>
/**
 * main -  This a C program that prints the the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; ++c)
{
putchar(c);
}
putchar('\n');
return (0);
}
