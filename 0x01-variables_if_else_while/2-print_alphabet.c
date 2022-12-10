#include <stdio.h>
#include <stdlib.h>
/**
 * main - Main function to print alphabet in lowercase
 * Return: Always 0
 *
*/
int main(void)
{
	int n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	putchar("\n");

	return (0);
}
