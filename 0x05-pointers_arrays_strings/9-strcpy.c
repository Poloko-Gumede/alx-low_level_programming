#include "main.h"

/**
 * _strcpy - copies the str pointed to by src, including the terminating null
 * byte, to the buffer pointed to by dest.
 *
 * @dest: pointer to destination buffer.
 * @src: pointer to source string.
 *
 * Return: pointer to destination buffer.
 */
char *_strcpy(char *dest, char *src)
{
char *start = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';
return (start);
}
