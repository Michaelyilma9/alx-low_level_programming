#include <stdio.h>
/**
 * main - block
 *
 * Return: 0
 */
int main(void)
{
int c = 0;

while (c < 0)
{
putchar(48 + c);
if (c != 9)
{
putchar(',');
putchar(' ');
}
c++;
}
putchar('\n');
return (0);
}
