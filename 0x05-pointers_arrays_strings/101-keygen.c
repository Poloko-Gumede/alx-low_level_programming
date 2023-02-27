#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// The provided hash function
int hash(char *s)
{
int hash;
unsigned int i;

for (i = 0, hash = 0; s[i]; i++)
hash = hash + s[i] * (i + 1);

return (hash);
}

int main(void)
{
const int NUM_PASSWORDS = 10;
const int PASSWORD_LENGTH = 10;
const int DESIRED_HASH = 0x5d;
const char CHARSET[] = "abcdefghijklmnopqrstuvwxyz";
char password[PASSWORD_LENGTH + 1];
int i, h;

// Seed the random number generator
srand(time(NULL));

// Generate the passwords
for (i = 0; i < NUM_PASSWORDS; i++)
{
// Generate a random password
for (int j = 0; j < PASSWORD_LENGTH; j++)
password[j] = CHARSET[rand() % 26];
password[PASSWORD_LENGTH] = '\0';

// Hash the password and check if it's valid
h = hash(password);
if (h == DESIRED_HASH)
{
printf("Valid password found: %s\n", password);
}
}

return 0;
}

