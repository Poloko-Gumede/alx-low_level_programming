#include "main.h"
#include <stddef.h>
/**
 * _strstr - Locates a substring.
 * @haystack: The string to search.
 * @needle: The substring to search for.
 *
 * Return: If needle is found - a pointer to the beginning of the located
 * substring;
 *         If needle is not found - NULL.
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int i, j;

for (i = 0; haystack[i]; i++)
{
for (j = 0; needle[j]; j++)
{
if (needle[j] != haystack[i + j])
break;
}

if (!needle[j])
return (haystack + i);
}

return (NULL);
}
