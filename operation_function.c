#include "main.h"

/**
 * print_char - print a character
 * @args: the character to print
 * Return: an int
 */
int print_char(va_list args)
{
	int count = 0;
	char c;

	c = va_arg(args, int);

	if (c)
	{
		count = write(1, &c, 1);
		return (count);
	}

	return (0);

}

/**
 * print_cent - print the percent sign
 * @args: the argument
 * Return: an int
 */

int print_cent(va_list args)
{
	return (0);
}

/**
 * print_str - print sstring
 * @args: arguments
 * Return: an int
 */
int print_str(va_list args)
{
	return (0);
}


/**
 * print_d - print decimal
 * @args:argumnet
 * Return: int
 */
int print_d(va_list args)
{
	int i = 0, d;

	d = va_arg(args, int);
	if (d < 0)
	{
		d = -d;
		putchar('-');
		i = write(1, &d, 1);
		return (i);
	}
	puts(convert(d, 10));
	return (0);
}

/**
 * print_i - print an integer
 * @args: arguments
 * Return: integer
 */
int print_i(va_list args)
{
	int count = 0;
	int i;

	i = va_arg(args, int);
	if (i < 0)
	{
		i = -i;
		putchar('-');
		count = write(1, &i, 1);
		return (count);
	}
	puts(convert(i, 10));
	return (0);
}





