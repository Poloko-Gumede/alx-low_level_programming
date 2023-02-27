#include "main.h"
#include <stddef.h>
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: pointer to a string
 *
 * Return: void
 */
void print_rev(char *s)
{
int len = 0;

if (s != NULL)
{
while (*(s + len) != '\0')
{
len++;
}

for (len--; len >= 0; len--)
{
_putchar(*(s + len));
}
}

_putchar('\n');
}
