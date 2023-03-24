#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - applies a given function to each element of an array
 * @array: the array of integers
 * @size: the size of the array
 * @action: the function to apply to each element of the array
 *
 * Description: This function takes an array, its size,
 *and a function pointer as arguments.
 * It applies the function pointed to by 'action' to each element of the array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array == NULL || action == NULL)
return;

for (size_t i = 0; i < size; i++)
action(array[i]);
}
