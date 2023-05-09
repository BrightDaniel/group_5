#include <stdio.h>

int main()
{

	char name[15];
	printf("Name: ");
	scanf("%s", name);

	int i;

	for(i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%s ", name);
		}

		printf("\n \n");
	}

	return 0;
}
