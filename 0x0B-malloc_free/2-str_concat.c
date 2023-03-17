#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string to be concatenated.
 * @s2: The second string to be concatenated.
 *
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer to the newly-allocated space in memory
 *         containing the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
unsigned int size1 = 0, size2 = 0, i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[size1])
size1++;
while (s2[size2])
size2++;

concat = malloc(sizeof(char) * (size1 + size2 + 1));
if (concat == NULL)
return (NULL);

for (i = 0; i < size1; i++)
concat[i] = s1[i];
for (j = 0; j < size2; j++)
concat[i + j] = s2[j];
concat[i + j] = '\0';

return (concat);
}
