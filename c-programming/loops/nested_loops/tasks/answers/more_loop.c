#include <stdio.h>

int main()
{
	//Input rows from user
	int rows;
	printf("Enter number of rows: ");
	scanf("%d", &rows);


	// print out the rows
	for(int i = 1; i <= rows; i++)
	{

		//print out space 
		for (int j = i; j < rows; j++)
		{
			printf(" ");
		}

		//print out star
		for (int j = 1; j <= i; j++)
		{
			printf("* ");
		}


		printf("\n");
	}	
}
