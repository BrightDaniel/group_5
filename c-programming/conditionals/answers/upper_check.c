#include <stdio.h>
/**
 * main - entry point
 *Return: On success 0
 */

int main(void)
{

	char input;

	printf("Enter a character: \n");
	scanf("%c", &input);

	if (input >= 97 && input <= 122)
		printf("%c is a lowercase alphabelt \n", input);
	else if (input >= 65 && input <= 90)
		printf("%c is a uppercase alphabelt \n", input);
	/*if (input >= 'a' && input <= 'z')
		printf("%c is a lowercase alphabelt \n", input);
	else if (input >= 'A' && input <= 'Z')
	printf("%c is a uppercase alphabelt \n", input);*/
	else
		printf("Error\n");
	return (0);
}
