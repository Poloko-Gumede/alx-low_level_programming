#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 * @n: Maximum number of bytes to copy from src.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

/* Copy at most n bytes from src to dest */
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

/* Fill the rest of dest with null characters */
for (; i < n; i++)
dest[i] = '\0';

/* Return a pointer to dest */
return (dest);
}
