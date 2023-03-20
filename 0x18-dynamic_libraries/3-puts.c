#include "main.h"
/*
 * File: 3-puts.c
 * written by Tyrone
 */

/**
 * _puts - Prints a string to stdout.
 * @str: The string to be printed.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
