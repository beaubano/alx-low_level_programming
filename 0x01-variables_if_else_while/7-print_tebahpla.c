#include <stdio.h>
#include <stdlib.h>
/**
 * main -main function to print the lowercase alphabet in reverse
 * Return: Always 0
*/
int main(void)
{
	char n = 'a';

	for (n = 'a'; n >= 'z'; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
