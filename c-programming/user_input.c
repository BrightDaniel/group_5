#include <stdio.h>

int main()
{
	char first_name[20];
	char last_name[20];

	printf("What is your first name?:\n ");
		scanf("%s", first_name);

	printf("What is your last name?:\n ");
		scanf("%s", last_name);


	printf("Your name is first name = %s and your last name is = %s",first_name, last_name);

	return 0;

}

