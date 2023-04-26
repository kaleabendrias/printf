#include "main.h"

/**
 * printf_rot - prints rot13'ed string
 * @args: argumrnt
 * Return: always
 */

int printf_rot(va_list args)
{
	int i, j, c, k;
	char *s;

	char a[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char b[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	c = 0;
	k = 0;
	s = va_arg(args, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		k = 0;
		for (j = 0; a[j] && !k; j++)
		{
			if (s[i] == a[j])
			{
				_putchar(b[j]);
				c++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[i]);
			c++;
		}
	}
	return (c);
}

