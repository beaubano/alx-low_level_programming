#include "main.h"
/**
 *
 * strlen_rec - String length
 * @str: char
 * Return: the integer length
 */
int strlen_rec(char *str)
{
	if (*str)
	{
		str++;
		return (1 + strlen_rec(str));
	}
		return (0);
}
