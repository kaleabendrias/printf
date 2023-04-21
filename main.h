#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

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
int _putchar(char c);
int _printf(const char *format, ...);

#endif
