#include <stdio.h>
/**
 * main - entry point
 *Return: Always 0
 */

int main()
{
	char input;

	printf("Enter input: \n");
	scanf("%c", &input);

	if (input >= 65 & input <= 90 || input >= 97 & input <= 122)
		printf("%c is an alphabelt\n", input);
	else
	printf("%c is NOT an alphabelt\n", input);
	return (0);
}