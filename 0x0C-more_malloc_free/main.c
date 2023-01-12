#include "main.h"
/**
 * _putchar - writes the character c
 * @c: the character to print
 *
 * Return: on success 1.
 */
int putchar(char c)
{
	return (write(1, &c, 1));
}
