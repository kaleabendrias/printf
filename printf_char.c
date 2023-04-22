#include "main.h"

/**
 * printf_char - prints a character
 * @val: args
 * Return: Always
 */

int printf_char(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}

/**
 * printf_string - prints string
 * @args: args
 * Return: Always
 */

int printf_string(va_list args)
{
	char *s;
	int i, len;

	s = va_arg(args, char *);
	if (s == NULL)
	{
		s = "(null)";
	}
	len = _strlen(s);
	for (i = 0; i < len; i++)
		_putchar(s[i]);
	return (len);
}

/**
 * printf_37 - prints %
 * Return: Always
 */

int printf_37(void)
{
	_putchar(37);
	return (1);
}
