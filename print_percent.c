#include "main.h"

/**
 * print_cent - print %
 * @args: argumnets
 * Return: %
 */

int print_cent(va_list args)
{
	(void)args;

	write(1, "%", 1);
	return (1);
}

