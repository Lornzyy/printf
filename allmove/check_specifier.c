#include "main.h"

/**
 * check_specifier - confirm its a valid format specifier
 * and assign to the approppiate function for printing
 * @format: type of specifier
 *
 * Return: pointer to a function
 */

int (*check_specifier(const char *format))(va_list)
{
	int i;

	func_t  my_array[6] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_cent},
		{"d", print_d},
		{"i", print_i},
		{NULL, NULL}
	};

	for (i = 0; (my_array[i].t) != NULL; i++)
	{
		/*
		 * if the array return a format
		 * return a fn pointing to what to do with the format
		 */
		if (*(my_array[i].t) == *format)
		{
			return (my_array[i].f); /* to return the function*/
		}
	}

	return (NULL);
}

