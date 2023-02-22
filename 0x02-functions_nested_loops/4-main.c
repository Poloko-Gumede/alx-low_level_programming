#include "main.h"
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
/* Declare variable */
char c;

/* Assign value to variable */
c = 'H';

/* Check if c is alphabetic */
if (_isalpha(c))
_putchar(c);

/* Return 0 on success */
return (0);
}

