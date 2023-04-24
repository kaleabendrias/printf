#include <stdarg.h>
#include "main.h"

/**
 * printf_S - handles %S
 * @args: argument
 * Return: Always
 */

int printf_S(va_list args)
{
	int count, i, j, hex, digit;
	char *s;

	count = 0;
	s = va_arg(args, char *);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] > 31 && s[i] < 127)
		{
			_putchar(s[i]);
			count++;
		}
		else
		{
			_putchar('\\');
			_putchar('x');
			hex = (int) s[i];
			count += 4;
			for (j = 0; j < 2; j++)
			{
				digit = (hex >> ((1 - j) * 4)) & 0xf;
				if (digit < 10)
					_putchar(digit + '0');
				else
					_putchar(digit - 10 + 'A');
			}
		}
	}
	return (count);
}

