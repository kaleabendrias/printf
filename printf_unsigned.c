#include "main.h"
#include <stdarg.h>

/**
 * printf_unsigned - printf function for printing the
 * unsigned int argument in decimal format
 * @args: va_list containing the arguments
 * Return: the number of digits to be printed
 */

int printf_unsigned(va_list args)
{
	unsigned int num, divisor;
	int digits;
	int digit;

	num = va_arg(args, unsigned int);

	divisor  1;
	digits = 1;

	while (num / divisor > 9)
	{
	divisor *= 10;
	digits++;
	}

	while (divisor > 0)
	{
	digit = num / divisor;
	_putchar(digit + '0');
	num %= divisor;
	divisor /= 10;
	}

	return (digits);
}
