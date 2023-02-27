#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
long long n = 612852475143;
long long max_factor = 1;

while (n % 2 == 0)
{
max_factor = 2;
n /= 2;
}

for (long long i = 3; i <= sqrt(n); i += 2)
{
while (n % i == 0)
{
max_factor = i;
n /= i;
}
}

if (n > 2)
{
max_factor = n;
}

printf("%lld\n", max_factor);
return (0);
}
