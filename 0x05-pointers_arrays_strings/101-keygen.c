#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * generateRandomPassword - Generate a random password of given length.
 * @password: Pointer to the buffer where the generated password will be stored.
 * @length: The length of the password to be generated.
 */
void generateRandomPassword(char *password, int length)
{
	const char charset[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	int charsetLength = sizeof(charset) - 1;

	for (int i = 0; i < length; i++)
	{
		password[i] = charset[rand() % charsetLength];
	}
	password[length] = '\0'; // Null-terminate the string
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 on success.
 */
int main(void)
{
	srand(time(NULL));

	int passwordLength = 12; // You can change this to the desired password length

	// Allocate memory for the password
	char *password = malloc((passwordLength + 1) * sizeof(char));

	if (password == NULL)
	{
		return 1; // Memory allocation error
	}

	// Generate the random password
	generateRandomPassword(password, passwordLength);

	// Use the generated password for your specific purpose here
	// For example, you can store it in a file or use it for further processing.

	// Free allocated memory
	free(password);

	return 0;
}
