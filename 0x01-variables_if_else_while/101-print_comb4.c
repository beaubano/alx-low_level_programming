#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints combination of all two digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;
	int t;
	int o;

	while (num <= 99)
	{
		t = num % 10;
		o = num / 10;

		if (o < t)
		{
			putchar(o + '0');
			putchar(t + '0');
			if (num < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		num++;
	}
	putchar('\n');

	return (0);
}
