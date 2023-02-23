#include "main.h"

int mul(int a, int b)
{
int result = 0;
int i;

if (a == 0 || b == 0) {
return 0;
}

if (b < 0) {
a = -a;
b = -b;
}

for (i = 0; i < b; i++) {
result += a;
}

return result;
}

