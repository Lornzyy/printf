#include "main.h"

/**
 * _printf - printf string in a formatted way
 * @format: the format of the argumen
 * Return: int
 */

int _printf(const char *format, ...)
{
	int i = 0, count = 0, value = 0;
	va_list args;
	int (*f)(va_list);

	va_start(args, format);

	/* if format is null exit with -1*/
	if (format == NULL)
		return (-1);

	/*prints everything */
	while (format[i])
	{
		/* check for % sign */
		if (format[i] != '%')
		{
			value = write(1, &format[i], 1);
			/**
			 * enters the loop and prints the character it meets
			 * value return what write returns to
			 * store the value which should be an int
			 */
			count += value;
			i++;
			continue;
		}
		if (format[i] == '%')
		{
			/**
			 * whenever we encounter the loop we should look at the next character
			 * declare a function that will capture
			 * the next index do something within itself, return funvtion
			 * taking  the variadic fn specified and send it to count
			 */
			f = check_specifier(&format[i + 1]);
			if (f != NULL)
			{
				value = f(args);
				count += value;
				i = i + 2;
				continue;
			}
			if (format[i + 1] == '\0')
			{
				break;
			}

			if (format[i + 1] != '\0')
			{
				value = write(1, &format[i], 1);
				count += value;
				i += 2;
				continue;
			}
		}
	}
	return (count);

}

char *convert(unsigned int num, int base)
{
	static char Representation[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do
	{
		*--ptr = Representation[num%base];
		num /= base;

	}
	while (num != 0);

	
	return (ptr);

}



