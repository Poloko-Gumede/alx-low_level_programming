#include "main.h"
#include <stdio.h>

int main(void)
{
char c = 'a';
int result;

result = _islower(c);

printf("%c is lowercase: %d\n", c, result);

return (0);
}

