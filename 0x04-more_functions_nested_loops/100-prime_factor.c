#include <stdio.h>
#include <math.h>

/**
 * main - Finds and prints the largest prime factor
 * of the number 612852475143, followed by a new line.
 *
 * Return: Always 0
 */

int main(void)
{
unsigned long n = 612852475143;
unsigned long largest_factor = 0;

while (n % 2 == 0) {
largest_factor = 2;
n /= 2;
}

for (int i = 3; i <= sqrt(n); i += 2) {
while (n % i == 0) {
largest_factor = i;
n /= i;
}
}

if (n > 2) {
largest_factor = n;
}

printf("%lu\n", largest_factor);

return 0;
}

