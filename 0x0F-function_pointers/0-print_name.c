#include <stdio.h>

/**
 * print_name - prints a name
 * @name: the name to be printed
 * @f: a function that takes a string argument and returns void
 *
 * Description: This function takes a name and a function pointer as arguments.
 * The function pointer is used to print the name in a specific way
 * (e.g. uppercase, lowercase, etc.).
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
