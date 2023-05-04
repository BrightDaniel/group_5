#include <stdio.h>

int main()
{
	int start, end;

	printf("Enter start and end of range: ");
	scanf("%d %d", &start, &end );

	for(int i = start + (start % 2); i <= end; i += 2)
	{
		printf("%d  ", i);
	}
	return 0;
}



