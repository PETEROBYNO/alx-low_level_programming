#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

// Function to generate a random character from a given set
char randomCharacter(const char* charSet, int setSize) {
    return charSet[rand() % setSize];
}

int main(void) {
    // Define the character set for the password
    const char charSet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    const int charSetSize = sizeof(charSet) - 1;

    // Define the length of the password
    const int passwordLength = 12;

    // Seed the random number generator
    srand(time(NULL));

    // Generate and print the random password
    char password[passwordLength + 1];
    for (int i = 0; i < passwordLength; i++) {
        password[i] = randomCharacter(charSet, charSetSize);
    }
    password[passwordLength] = '\0';

    printf("Generated Password: %s\n", password);

    return 0;
}

