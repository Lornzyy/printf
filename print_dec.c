#include "main.h"

/**
 * print_d - print the decimal
 * @args: argument
 * Return: number
 */

int print_d(va_list args)
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

