#include <stdio.h>

int main(void) {

	int num, end;

	printf("Multiply numbers from 1 - : ");
	scanf ("%d", &num);


	printf(" \n\t Multiplication table from 1 - %d arr as follows: \n \n", num);


	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= num; j++)
		{
			int ans = j * i;

			printf("%d * %d = %d,  ", j, i, ans);
		}

		printf("\n");

	}

}

