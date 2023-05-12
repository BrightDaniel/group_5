#include <stdio.h>

int main()
{

	int num, count = 1;
	printf("Enter the number of rows: ");
	scanf("%d", &num);


	//count for the num of rows
	for(int i = 1; i <= num; i++)
	{
		// count for the num of col
		for(int j = 1; j <= i; j++)
		{
			printf("%d ", count++ );
		}
		printf("\n");
	}




}
