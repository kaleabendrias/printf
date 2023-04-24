#include "main.h"
#include <stdarg.h>

/**
 * printf_o - printf function for printing the unsigned int argument
 * using octal format
 * @args: input
 * Return: the number of digits to be printed
 */

int printf_o(va_list args)
{
	unsigned int num, divisor, temp;
	int digits;

	divisor = 1;
	num = va_arg(args, unsigned int);
	temp = num;
	digits = 0;

	while (temp >= 8)
	{
	temp /= 8;
	divisor *= 8;
	r}
	while (divisor > 0)
	{
	int digit = num / divisor;

	_putchar('0' + digit);
	num -= digit * divisor;
	divisor /= 8;
	digits++;
	}

	return (digits);
}
