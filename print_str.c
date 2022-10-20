#include"main.h"

/**
 * print_str- print the string
 * @args: arguments
 * Return: string
 */

int print_str(va_list args)
{
	int i;
	int count = 0;
	char *s;

	s = va_arg(args, char *);

	if (s == NULL)
	{
		return (-1);
	}
	while (s[i])
	{
		count = write(1, &s[i], 1);
		i = i + 1;
	}
	return (count);
}

