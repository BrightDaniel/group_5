#include <stdio.h>
#include "sqaure.h"

int main()
{
	double number;

	printf("Enter a number to get the sqaureroot: ");
	        scanf("%lf", &number);

	printf("%.2lf \n", squareroot(number));

}
