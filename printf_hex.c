#include "main.h"
#include <stdarg.h>

/**
 * printf_hex1 - conversion specifier used to print the unsigned intiger
 * in hexadecimal lowercase format
 * @args: input
 * Return: the number of gits in hexadecimal format
 */

int printf_hex1(va_list args)
{
	unsigned int num, temp;
	int digits, i;

	char hex[16] = {'0', '1', '2', '3', '4',
		'5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
	char hex_num[32];

	digits = 0;

	num = va_arg(args, unsigned int);
	temp = num;

	while (temp > 0)
	{
	temp /= 16;
	digits++;
	}

	for (i = 0; i < digits; i++)
	{
	int digit = num % 16;

	hex_num[i] = hex[digit];
	num /= 16;
	}

	for (i = digits - 1; i >= 0; i--)
	{
	_putchar(hex_num[i]);
	}

	return (digits);
}

/**
 * printf_hex2 - conversion specifier used to print the unsigned int
 * in hexadecimal uppercase format
 * @args: input
 * Return: the number of digits in hexadecimal format
 */
int printf_hex2(va_list args)
{
	unsigned int num, temp;
	int digits, i;

	char hex[16] = {'0', '1', '2', '3', '4',
	 '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	char hex_num[32];

	digits = 0;

	num = va_arg(args, unsigned int);
	temp = num;

	while (temp > 0)
	{
	temp /= 16;
	digits++;
	}

	for (i = 0; i < digits; i++)
	{
	int digit = num % 16;

	hex_num[i] = hex[digit];
	num /= 16;
	}

	for (i = digits - 1; i >= 0; i--)
	{
	_putchar(hex_num[i]);
	}

	return (digits);
}
