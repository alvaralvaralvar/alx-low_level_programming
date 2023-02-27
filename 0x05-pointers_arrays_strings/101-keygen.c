#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10
#define CHARACTERS "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_-+={}[]\\|;:'\",.<>/?`~"

int main(void)
{
    srand(time(NULL)); // Seed the random number generator with the current time

    char password[PASSWORD_LENGTH + 1]; // +1 for the null terminator
    int i;

    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        password[i] = CHARACTERS[rand() % (sizeof(CHARACTERS) - 1)];
    }
    password[PASSWORD_LENGTH] = '\0'; // Add the null terminator to the end of the string

    printf("%s\n", password);

    return 0;
}
