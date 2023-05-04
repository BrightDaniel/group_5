#include <stdio.h>

int main()
{
	int start, end;
	printf("Enter range of numbers: ");
	scanf("%d %d", &start, &end);

	int num = start + 1 - (start % 2);

	for (; num <= end; num +=2)
	{
		printf("%d  ", num);
	}

	return 0;
}

