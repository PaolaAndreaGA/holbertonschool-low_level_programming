#include <stdio.h>
/**
 * main - This a C program that prints the the alphabet in lowercase no q no e.
 *
 * Return: Always 0.
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; ++c)
{
if (c != 'q' && c != 'e')
{
putchar(c);
}
}
putchar('\n');
return (0);
}
