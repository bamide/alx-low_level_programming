#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_PASSWORD_LENGTH 12

char generateRandomChar() {
    char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=[]{}|;:,.<>?";
    int index = rand() % (sizeof(charset) - 1);
    return charset[index];
}

int main() {
    int passwordLength, i;

    printf("Enter the password length (up to %d): ", MAX_PASSWORD_LENGTH);
    scanf("%d", &passwordLength);

    if (passwordLength > MAX_PASSWORD_LENGTH || passwordLength <= 0) {
        printf("Invalid password length. Please enter a value between 1 and %d.\n", MAX_PASSWORD_LENGTH);
        return 1;
    }

    srand(time(NULL));

    printf("Generated password: ");
    for (i = 0; i < passwordLength; i++) {
        printf("%c", generateRandomChar());
    }
    printf("\n");

    return 0;
}
