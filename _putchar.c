#include "main.h"

/**
 * _putchar - Entry point
 * @c: The character to printed
 *
 * Return: 1 for success, -1 for error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
