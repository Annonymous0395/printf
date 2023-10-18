#include "main.h"

/** _printf - Entry poin
 * @format: arg to be printed
 *
 * Return - number of char printed
 */

int _printf(const char *format, ...)
{
	unsigned int i, j;
	va_list arg;
	va_start(arg, format);

	for (i = 0; format[i] != '0'; i++);
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			i++;
			j++;
		}
	}
	return (j)
}
