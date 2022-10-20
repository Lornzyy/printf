#include "main.h"

/**
 * print_char - print an integer
 * @args: argunment
 * Return: count
 */

int print_char(va_list args)
{
	int count = 0;
	int c;

	c = va_arg(args, int);

	if (c)
	{
		count = write(1, &c, 1);
		return (count);
	}
	if (c == 0)
	{
		return (1);
	}

	return (0);
}

