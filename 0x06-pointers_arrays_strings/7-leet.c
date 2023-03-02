#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @s: The input string
 *
 * Return: Pointer to the encoded string
 */
char *leet(char *s)
{
int i, j;
char leet_table[5][2] = {
{'a', '4'},
{'e', '3'},
{'o', '0'},
{'t', '7'},
{'l', '1'}
};

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 5; j++)
{
if (s[i] == leet_table[j][0] || s[i] == leet_table[j][0] - 32)
s[i] = leet_table[j][1];
}
}

return (s);
}
