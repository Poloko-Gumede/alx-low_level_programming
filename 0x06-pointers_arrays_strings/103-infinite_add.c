#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area to fill
 * @b: the constant byte to fill the memory area with
 * @n: the number of bytes to fill
 *
 * Return: pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
s[i] = b;

return (s);
}

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 *
 * Return: length of the string
 */
size_t _strlen(const char *s)
{
int len = 0;

while (*s)
{
len++;
s++;
}

return (len);
}

/**
 * infinite_add - adds two numbers and stores the result in a buffer
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: size of the buffer
 *
 * Return: pointer to the result in buffer r or 0 if result can't fit in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = _strlen(n1);
int len2 = _strlen(n2);
int len = len1 > len2 ? len1 : len2;
int carry = 0;
int sum = 0;
int i = len1 - 1;
int j = len2 - 1;
int k = len;
char *result;

if (len + 1 > size_r)
return (0);

result = _memset(r, '0', len + 1);
result[len + 1] = '\0';

while (i >= 0 || j >= 0 || carry > 0)
{
int digit1 = i >= 0 ? n1[i] - '0' : 0;
int digit2 = j >= 0 ? n2[j] - '0' : 0;
sum = digit1 + digit2 + carry;
carry = sum / 10;
sum = sum % 10;
result[k] = sum + '0';
i--;
j--;
k--;
}

if (result[0] == '0')
_memset(result, ' ', 1);

return (result);
}

