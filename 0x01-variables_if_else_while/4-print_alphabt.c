#include <stdio.h>
#include <stdlib.h>
/**
 * main -main function to print alphabet except q and e
 * Return: Always 0
 *
*/
int main(void)

{
	int n = 'a';

	for (n = 'a'; n <= 'z'; n++)
	{
		if ((n != 'q') && (n != 'e'))
		{
			putchar(n);
		}
	}
	putchar('\n');
	return (0);
}
