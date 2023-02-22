#include "main.h"
#include <unistd.h>

int main(void)
{
print_alphabet_x10();
return (0);
}

int _putchar(char c)
{
return (write(1, &c, 1));
}

