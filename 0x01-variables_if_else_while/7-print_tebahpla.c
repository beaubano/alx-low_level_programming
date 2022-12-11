#include <stdio.h>
#include <stdlib.h>
/**
 * main -main function to print the lowercase alphabet in reverse
 * Return: Always 0
*/
int main(void)
{
	int n = 'a';

	while (n >= 'z')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
