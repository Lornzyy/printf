#ifndef PRINTF_H
#define PRINTF_H


#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct func - a structure for the specifiers
 * @t: the char pointer
 * @f: function pointer
 * Return: struct
 */
typedef struct func
{
	char *t;
	int (*f)(va_list);
} func_t;

int _write(char);
int _printf(const char *format, ...);
int (*check_specifier(const char *))(va_list);
int print_char(va_list);
int print_str(va_list);
int print_cent(va_list);
int print_d(va_list);
int print_i(va_list);
char *convert(unsigned int num, int base);

#endif /* PRINTF_H */
