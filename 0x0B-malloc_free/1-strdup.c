#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a new string which is a duplicate of the
 *           string str.
 * @str: The string to duplicate.
 *
 * Return: If str is NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
char *dup;
unsigned int size = 0, i;

if (str == NULL)
return (NULL);

while (str[size])
size++;

dup = malloc(sizeof(char) * (size + 1));
if (dup == NULL)
return (NULL);

for (i = 0; i < size; i++)
dup[i] = str[i];
dup[size] = '\0';

return (dup);
}
