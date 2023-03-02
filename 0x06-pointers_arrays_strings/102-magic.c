#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;

/* Your code goes here */
*(p + 5) = 98;

/* Print "a[2] = 98" followed by a new line */
printf("a[2] = %d\n", a[2]);
return (0);
}
