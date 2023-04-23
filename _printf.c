#include "main.h"

/**
 * _printf - selscts the correct conversion specifier and sned it to the fun
 * @format: idnetfier
 * Return: the length
 *
 */

int _printf(const char * const format, ...)
{
	conv m[] = {
		{"%s", printf_string}, {"%c", printf_char},
		{"%%", printf_37}, {"%d", printf_int},
		{"%i", printf_i}, {"%b", printf_b},
		{"%u", printf_unsigned}, {"%o", printf_o},
		{"%x", printf_hex1}, {"%X", printf_hex2}
	};

	va_list args;
	int i = 0;
	int j, len = 0;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		va_end(args);
		return (-1);
	}
	while (format[i] != '\0')
	{
		j = 9;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len += m[j].f(args);
				i = i + 2;
				break;
			}
			j--;
		}
		if (j < 0)
		{
			_putchar(format[i]);
			len++;
			i++;
		}
	}
	va_end(args);
	return (len);
}

