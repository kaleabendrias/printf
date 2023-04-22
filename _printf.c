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
		{"%i", printf_i},
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
		if (format[i] == '%')
		{
			j = 0;
			while (j < 5)
			{
				if (m[j].id[1] == format[i + 1])
				{
					len += m[j].f(args);
					i += 2;
					break;
				}
				j++;
			}
			if (j == 5)
			{
				_putchar(format[i]);
				len++;
				i++;
			}
		}
		else
		{
			_putchar(format[i]);
			len++;
			i++;
		}
	}
	va_end(args);
	return (len);
}

