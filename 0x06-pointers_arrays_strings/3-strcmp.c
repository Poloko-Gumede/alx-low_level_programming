#include "main.h"

/**
 * _strcmp - Compare two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Integer indicating the difference between the first non-matching
 * character in s1 and s2, or 0 if both strings are equal.
 */
int _strcmp(char *s1, char *s2)
{
int i;

for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
}

/* At this point, either s1[i] or s2[i] is '\0' or both are */
if (s1[i] == s2[i])
{
return (0);
}
else if (s1[i] == '\0')
{
return (-s2[i]);
}
else /* s2[i] == '\0' */
{
return (s1[i]);
}
}

