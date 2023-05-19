#include <stdio.h>


int length(char input[])
{
	int length = 0;

	for(int count = 0; input[count] != '\0'; count++)
		length++;

	return length;
}



int print(int x, int y)
{

	printf("Enter 2 numbers: ");
	scanf("%d %d", &x, &y);

	printf("The result is: %d\n", x + y);

	return x + y;
}



int call(int x, int y)
{

	printf("Enter 2 numbers: ");
	scanf("%d %d", &x, &y);


	printf("The result is: %d\n", x * y);

	return x * y;
}



void bwave_num()
{
	int num;
	printf("enter an integar: ");
	scanf("%d", &num);
	printf("You entered: %d", num);
}



int get_int(char *prompt)
{
	int input;

	printf("%s", prompt);
	
	scanf("%d", &input);

	return input;
}



