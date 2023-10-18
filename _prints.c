#include "main.h"

/**
 * _len - Entry point
 * @s: string to be printed
 *
 * Return: len of string s
 */

int _len(char *s)
{
	int i = 0;
	
	if(s == NULL)

	while (s[i] != '\0')
	{
		i++;
	}

	return (i)
}

/**
 * _prints - Entry point
 * @val: arg
 * Return: the length of the string.
 */

int _prints(va_list val)
{
	char *s;
	int i, len;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _len(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _len(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
}
