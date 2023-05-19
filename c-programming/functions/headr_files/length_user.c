#include <stdio.h>
#include "bwave.h"

int length(char input[]);


int main()
{
	char input[150];

	printf("Enter a string: ");
	scanf("%s", input);

	//TODO
	int string_length = length(input);

	printf("The length of the string is %d \n", string_length);
}





   
