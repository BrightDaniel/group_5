#include <stdio.h>

int main(void) {

	int num, end;

	printf("Enter a num to multiply: ");
	scanf ("%d", &num);

	printf("Enter a num you want the multiplication to end: ");
	scanf ("%d", &end);

	for (int i = 1; i <= end; i++)
	{
		int ans = num * i;

		printf("%d * %d = %d \n", num, i, ans);

	}

}

