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
	(void)args;

	write(1, "%", 1);
	return (1);
}

/**
 * print_str - print sstring
 * @args: arguments
 * Return: an int
 *int print_str(va_list args)
{
	int i;
	int count = 0;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		return (-1);
	while (str[i])
	{
		count = write(1, &str[i], 1);
		i = i + 1;
	}
	return (count);
}
*/

int print_str(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	puts(s);
}

/**
 * print_d - print decimal
 * @args:argumnet
 * Return: int
 */
int print_d(va_list args)
{
	int i = 0;
	int count = 0;
	int my_array[10];
	int d;
	char x[1];

	d = va_arg(args, int);
	while (d != 0)
	{
		my_array[i] = (d % 10);
		d = (d / 10);
		if (d == 0)
			break;
		else
			i++;
	}
	for (i; i >= 0; i--)
	{
		x[0] = ('0' + my_array[i]);
		count += write(1, x, 1);
	}
	return (count);
}

/**
 * print_i - print an integer
 * @args: arguments
 * Return: integer
 */
int print_i(va_list args)
{
	int i = 0;
	int count = 0;
	int my_array[10];
	int numb;
	char x[1];

	numb = va_arg(args, int);
	while (numb != 0)
	{
		my_array[i] = (numb % 10);
		numb = (numb / 10);
		if (numb == 0)
			break;
		else
			i++;
	}
	for (i; i >= 0; i--)
	{
		x[0] = ('0' + my_array[i]);
		count += write(1, x, 1);
	}
	return (count);
}





