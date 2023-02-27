#include "main.h"
#include <limits.h>
/**
 * _atoi - converts a string to an integer.
 *
 * @s: pointer to string to convert.
 *
 * Return: integer value of string.
 */
int _atoi(char *s)
{
int sign = 1, num = 0;

/* check for leading - or + signs */
if (*s == '-')
{
sign = -1;
s++;
}
else if (*s == '+')
{
s++;
}

/* convert string to integer */
while (*s != '\0')
{
if (*s >= '0' && *s <= '9')
{
num = num * 10 + (*s - '0');

/* check for integer overflow */
if ((sign *num) > INT_MAX)
{
return (INT_MAX);
}
else if ((sign *num) < INT_MIN)
{
return (INT_MIN);
}
}
else
{
break;
}

s++;
}

return (sign *num);
}

