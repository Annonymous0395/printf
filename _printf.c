#include "main.h"
#include <stdarg.h>

/**
 * _printf - Entry point
 * @format: arg to be printed
 *
 * Return:  number of char printed
 */

int _printf(const char * const format, ...)
{
	convert_match m[] = {
		{"%s", _prints}, {"%c", _printc},
		{"%%", _print%},
	};

	va_list args;
	int i = 0, j, k = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				k += m[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		k++;
		i++;
	}
	va_end(args);
	return (k);
}
