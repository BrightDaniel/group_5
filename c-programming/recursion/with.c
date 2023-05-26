#include <stdio.h>

//TODO:
//	Print oot the sum of a number.

int sum(int k); //function prototype.

int main()
{
	printf("%d \n", sum(10));

}


int sum(int k)
{
	if  (k > 0)
	{
		return k + sum(k - 1); 
	}
	else
		return 0;
}


