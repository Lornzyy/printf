#include "main.h"

/**
 * _printf - printf string in a formatted way
 * @format: the format of the argumen
 * Return: int
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	int value = 0;
	va_list args;
	int (*f)(va_list);

	va_start(args, format);
	if (format == NULL)
		return (-1);

	if (args == NULL)
		return (-1);

	while (format[i])
	{
		if (format[i] != '%')
		{
			value = write(1, &format[i], 1);
			count += value;
			i++;
			continue;
		}
		if (format[i] == '%')
		{
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
	va_end(args);

}

