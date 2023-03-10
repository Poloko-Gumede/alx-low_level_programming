#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int last_digit;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (last_digit < 0)
last_digit *= -1;

printf("Last digit of %d is ", n);

if (n < 0)
n = -n;

last_digit = n % 10;

if (last_digit == 0)
printf("%d and is 0\n", last_digit);
else if (last_digit < 6)
printf("%d and is less than 6 and not 0\n", last_digit);
else
printf("%d and is less than 6 and not 0\n", last_digit);

return (0);
}

