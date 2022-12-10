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

	for (n = 'a' ; n <= 'z' ; n++)
	{
		putchar("\n", n);
	}

	return (0);
}
