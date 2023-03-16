#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of chars,
 * and initializes it with a specific char.
 * @size: The size of the array.
 * @c: The character used to initialize the array.
 *
 * Return: On success a pointer to the array, otherwise NULL.
 */
char *create_array(unsigned int size, char c)
{
char *array;

if (size == 0)
return (NULL);

array = malloc(size * sizeof(char));

if (array == NULL)
return (NULL);

for (unsigned int i = 0; i < size; i++)
array[i] = c;

return (array);
}
