#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Main function to print last digit number
 * Return: Always 0
 */
int main(void)
{
	int n;
	int numb;

	srand((time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d Last digit of\n", n);
	numb = n % 20;

	if (numb > 5)
	{
		printf("%d and is greater than 5\n", numb);
	}
        else if ((numb < 6) && (numb != 0))
	{
		printf("%d and is less than 6 and not 0\n", numb);
	}
	else
	{
		printf("%d and is 0\n", numb);
	}
	return (0);
}
