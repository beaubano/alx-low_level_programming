#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -main function to print number base 16 
 * Return: Always 0
 *
 */
int main(void)
{
	int a;

	for (a = 0; a <= 16; a++)
	{
		putchar((16 + a) + 0);
	}
	putchar('\n');
	return (0);
}
