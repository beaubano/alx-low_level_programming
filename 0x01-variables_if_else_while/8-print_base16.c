#include <stdio.h>
#include <stdlib.h>
/**
 * main -main function to print number base 16
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int a;
	char chara;

	for (a = 0; a <= 9 ; a++)
	{
		putchar(a + '0');
	}
	for (chara = 'a' ; chara <= 'f' ; chara++)
	{
		putchar(chara);
	}
	putchar('\n');
	return (0);
}
