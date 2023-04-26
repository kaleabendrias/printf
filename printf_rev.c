#include "main.h"

/**
 * printf_rev - reverse string
 * @args: arguments
 * Return: always
 */

int printf_rev(va_list args)
{
	int i, len;
	char *str;

	str = va_arg(args, char *);
	len = _strlen(str);
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	return (len);
}

