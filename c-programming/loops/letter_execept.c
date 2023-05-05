#include <stdio.h>

int main()

{
	char letter;

	for ( letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'f' && letter != 'u')
			putchar(letter);
	}

	putchar('\n');
	return 0;


}
