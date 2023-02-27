#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to convert
 *
 * Return: the integer value of the string, or 0 if no number is found
 */
int _atoi(char *s)
{
int sign = 1, num = 0, i = 0;

while (s[i])
{
if (i == 0 && (s[i] == '+' || s[i] == '-'))
{
if (s[i] == '-')
sign = -1;
}
else if ((i == 0 || i == 2 || i == 4 || i == 5 || i == 7) && s[i] >= '0' && s[i] <= '9')
{
num = num * 10 + (s[i] - '0');
}
else if ((i == 1 && s[i] == ' ') || (i == 6 && s[i] == ' '))
{
/* Ignore spaces */
}
else if (s[i] < '0' || s[i] > '9')
{
break;
}
else
{
num = num * 10 + (s[i] - '0');
}
i++;
}

if ((sign *num) > INT_MAX)
return (INT_MAX);
else if ((sign *num) < INT_MIN)
return (INT_MIN);

return (sign *num);
}

