#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct format - conv specifier and function pointer
 * @id: conv specifiers
 * @f: pointer to function
 */

typedef struct format
{
	char *id;
	int (*f)();
} conv;

int _strlen(char *s);
int strlenc(const char *s);
int printf_37(void);
int printf_char(va_list args);
int printf_string(va_list args);
int printf_int(va_list args);
int printf_i(va_list args);
int printf_b(va_list args);
int printf_unsigned(va_list args);
int printf_o(va_list args);
int printf_hex1(va_list args);
int printf_hex2(va_list args);
int printf_S(va_list args);
int printf_p(va_list args);
int printf_rev(va_list args);
int printf_rot(va_list args);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
