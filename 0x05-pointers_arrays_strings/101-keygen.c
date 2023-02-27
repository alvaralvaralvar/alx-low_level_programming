#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10 // Maximum password length

int main(void)
{
    // Define the valid characters for the password
    const char* valid_chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789,.-#'?!";
    int num_valid_chars = strlen(valid_chars);

    // Seed the random number generator
    srand(time(NULL));

    // Generate a random password of random length between 1 and PASSWORD_LENGTH
    int password_length = rand() % PASSWORD_LENGTH + 1;
    char password[PASSWORD_LENGTH + 1]; // +1 for the null terminator
    for (int i = 0; i < password_length; i++)
    {
        password[i] = valid_chars[rand() % num_valid_chars];
    }
    password[password_length] = '\0'; // Add the null terminator

    // Print the password
    printf("%s\n", password);

    return 0;
}
