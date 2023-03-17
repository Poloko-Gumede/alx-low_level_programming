#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of the memory block to be allocated
 *
 * Return: a pointer to the allocated memory
 *         if malloc fails, the function causes normal process termination
 *         with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
