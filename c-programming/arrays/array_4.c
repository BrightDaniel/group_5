#include <stdio.h>

int main()
{
	int scores[] = {30, 35, 40, 45, 55, 66, 64, 77, 11, 33, 11, 33, 11, 33, 11, 10, 55, 99, 90};
		//	0    1   2   3   4   5   6   7  8   9   10  11  12  13  14
	
	
	int size = sizeof(scores)/sizeof(scores[0]);

	for(int i = 0; i < size; i++)
		printf("%d \n", scores[i]);



}
