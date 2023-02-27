#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 61

/**
 * main - Generates random valid passwords for the program 101-crackme
 *
 * Return: Always 0.
 */
int main(void)
{
    int i;
    char password[PASSWORD_LENGTH + 1];
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    srand(time(NULL));

    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        password[i] = charset[rand() % sizeof(charset)];
    }

    printf("%s\n", password);

    return (0);
}

