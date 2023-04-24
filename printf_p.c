#include "main.h"

/**
 * printf_p - prints pointer.
 * @args: args
 * Return: always
 */

int printf_p(va_list args)
{
	int i, j;
	unsigned long addr;
	char *hex_d, *ptr;
	char buffer[16];

	hex_d = "0123456789abcdef";
	ptr = va_arg(args, void*);
	addr = (unsigned long) ptr;
	i = 0;
	do {
		buffer[i++] = hex_d[addr % 16];
		addr /= 16;
	} while (addr > 0);
	buffer[i++] = 'x';
	buffer[i++] = '0';
	for (j = i - 1; j >= 0; j--)
		_putchar(buffer[j]);
	return (i);
}

