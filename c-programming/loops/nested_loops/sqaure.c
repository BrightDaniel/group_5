#include <stdio.h>

int main()
{
  int i;

  for(i = 0; i < 5; i++)
    {
      for (int j = 0; j < 5; j++)
	{
	  printf("* ");
	}
      
      printf("\n");
    }

  return 0;
}
