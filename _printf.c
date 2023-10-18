#include "main.h"
#include <stdarg.h>

/** _printf - Entry poin
 * @format: arg to be printed
 *
 * Return - number of char printed
 */

int _printf(const char *format, ...)
{
	unsigned int i, j = 0;
	va_list arg;
	va_start(arg, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			i++;
			_putchar(va_arg(arg, int));
		}
		j++;
	}
	return (j);
}
