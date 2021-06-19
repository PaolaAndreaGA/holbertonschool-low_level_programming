#include <stdio.h>
/**
 * main - C program that prints all possible combinations single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
int n;
int x;
for (n = 0; n <= 9; n++)
{
for (x = 0; x <= 9; n++)
{
putchar(n + '0');
putchar(x + '0');
if (n != 9 || x != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar("\n");
return (0);
}
