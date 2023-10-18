#include "main.h"

/**
 * _prints - Entry point
 * @s = string to be printed
 *
 * Return: len of string s
 */

int _prints(char *s)
{
	int i = 0, n = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
		n++;
	}

	return (n);
}
