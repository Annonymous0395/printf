#include "main.h"

/**
 * _printc - Entry point
 * @val: arg
 * Return: 0 success
 */
int _printc(va_list val)
{
	char c;

	c = va_arg(val, int);
	_putchar(c);
	return (0);
}
