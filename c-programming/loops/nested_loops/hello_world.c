#include <stdio.h>

int main()
{
	int i = 0, j = 0;

	while ( i < 10)
	{
		j = 0;	

		while ( j < 5)
		{
			printf("Hello-World ");
			j++;
		}
		
		puts("");
		i++;
	}
	return 0;
}
