#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * _printf - function that print.
 * @format: Parameter
 * Return: Result de functione
 */

int _printf(const char *format, ...)
{
	va_list lst;
	int count = 0;
	int i;
	int (*fptr)(va_list lst);

	va_start(lst, format);

	if (format == NULL)
	{
		return (-1);
	}
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] == ' ')
		{
			if (format[i + 2] == '\0')
				return (-1);
			i = i + 2;
			count++;
		}
		if (format[i] == '%')
		{	i++;
			fptr = type_of_variable(format[i]);
			if (fptr == NULL)
			{
				
					_putchar('%');
					_putchar(format[i]);
					count++;
					continue;
			}

			count = count + fptr(lst) - 1;
		}
		else
		{	_putchar(format[i]);
			count++;
		}
	}
	va_end(lst);
	return (count);
}