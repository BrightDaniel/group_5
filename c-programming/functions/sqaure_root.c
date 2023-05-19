#include <stdio.h>
#include <math.h>

int main()
{
	double number, squareroot;

	printf("Enter a number to get the sqaureroot: ");
	scanf("%lf", &number);

	// function from the math.h header to help get the sqaureroot of a number
	
	squareroot = sqrt(number);

	printf("The squareroot of %.2lf is %.2lf", number, squareroot);

	return 0;
}
	
