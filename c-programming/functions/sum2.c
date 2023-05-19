#include <stdio.h>


int main()
{
	call();

	return 0;
	// function calling
}


void sum()  /*function declaration */
{
	/*function definition starts */

	int num1, num2, sum;

	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);

	sum = num1 + num2;

	printf("The sum of %d and %d is: %d \n", num1, num2, sum);
	/* funcxtion defintion ends */
}

void sub()  /*function declaration */
{
	/*function definition starts */

	int num1, num2, sum;

	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);

	sum = num1 - num2;

	printf("The subtraction of %d and %d is: %d \n", num1, num2, sum);
	/* funcxtion defintion ends */
}

void mul()  /*function declaration */
{
	/*function definition starts */

	int num1, num2, sum;

	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);

	sum = num1 * num2;

	printf("The multiplication of %d and %d is: %d \n", num1, num2, sum);
	/* funcxtion defintion ends */
}

void div()  /*function declaration */
{
	/*function definition starts */

	int num1, num2, sum;

	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);

	sum = num1 / num2;

	printf("The division of %d and %d is: %d \n", num1, num2, sum);
	/* funcxtion defintion ends */
}

void call()
{
	sum();
	printf("\n");
	printf("\n");
	sub();
	printf("\n");
	printf("\n");
	mul();
	printf("\n");
	printf("\n");
	div();

}




























