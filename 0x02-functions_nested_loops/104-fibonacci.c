#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 * starting with 1 and 2, separated by comma and space
 *
 * Return: Always 0
 */
int main(void)
{
unsigned int i;
unsigned long int fib1 = 1, fib2 = 2, next;

printf("%lu, %lu, ", fib1, fib2);
for (i = 3; i <= 98; i++)
{
next = fib1 + fib2;
fib1 = fib2;
fib2 = next;

if (i != 98)
printf("%lu, ", next);
else
printf("%lu\n", next);
}

return (0);
}
