#include <unistd.h>

/**
 * _Putchar - Writes char 
 *  @c: char to be printed
 *  Return: 1
*/
int _Putchar(char c)
{
	return (write(1, &c,1));
}

