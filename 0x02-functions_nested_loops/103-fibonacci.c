#include <stdio.h>

/**
 * main - Prints the sum of the even-valued terms of the Fibonacci sequence
 *        whose values do not exceed 4,000,000
 *
 * Return: Always 0.
 */

int main(void)
{
unsigned long int sum, i, j, k;

sum = 0;
i = 1;
j = 2;

while (j < 4000000)
{
if (j % 2 == 0)
sum += j;

k = j;
j += i;
i = k;
}

printf("%lu\n", sum);

return (0);
}
