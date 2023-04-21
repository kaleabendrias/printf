#include "main.h"

/**
 * _strlen - returns length of string
 * @s: char pointer.
 * Return: c/
 *
 */

int _strlen(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

