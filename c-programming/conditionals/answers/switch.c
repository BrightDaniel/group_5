#include <stdio.h>
/**
 * main - entry point
 *Return: Always 0
 */

int main(void)
{
	char Lee;

	printf("Enter a number: \n");
      	scanf("%c", &Lee);

	switch (Lee)
	{
	case ('1'):
		printf("Monday\n");
		break;
	case ('2'):
		printf("Tuesday\n");
		break;
	case ('3'):
		printf("Wednesday\n");
		break;
	case ('4'):
		printf("Thursday\n");
		break;
	case ('5'):
		printf("Friday\n");
		break;
	case ('6'):
		printf("Welcome to the weekend\n");
		break;
	case ('7'):
		printf("Welcome to the weekend\n");
		break;
	default:
		printf("Invalid entry\n");
		break;
	}
	return (0);


}
