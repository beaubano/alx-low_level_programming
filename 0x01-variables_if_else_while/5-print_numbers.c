#include <stdio.h>
#include <stdlib.h>
/**
 * main -Print single digit
 * Return: Always 0
*/
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar((a % 10) + '0');
		a++;
	}
	putchar('\n');
	return (0);
}
