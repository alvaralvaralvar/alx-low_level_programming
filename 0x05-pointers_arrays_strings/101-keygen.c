#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main(void)
{
    // Define an array of characters that can appear in the password
    char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=";

    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random password
    char password[PASSWORD_LENGTH + 1]; // Add one for the null terminator
    for (int i = 0; i < PASSWORD_LENGTH; i++)
    {
        password[i] = charset[rand() % (sizeof(charset) - 1)];
    }
    password[PASSWORD_LENGTH] = '\0'; // Add the null terminator at the end

    // Print the password
    printf("%s\n", password);

    return 0;
}
