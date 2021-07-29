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
		/*Aquí detecta si despues del primer carácter especial le sigue 
		el segundo caracter especial predefinidos*/
		if (format[i] == '%' && format[i + 1] == ' ')
		{
			/*Aquí detecta si despues de dos espacios del format es '\0' devuelve -1*/
			if (format[i + 2] == '\0')
				return (-1);
			i = i + 2;
			count++;
		}
		if (format[i] == '%')
		{	
			/*Aquí entra cuando nos pasan un caracter especial predefinido*/
			i++;
			fptr = type_of_variable(format[i]);
			if (fptr == NULL)
			{
				if (format[i] =='%')
					_putchar(format[i]);
				else{
					_putchar(format[i - 1]);
					_putchar(format[i]);
				}
				count++;
				continue;
			}

			count = count + fptr(lst) - 1;
		}
		else
		{	
			/*Aquí entra solo cuando le pasan por parametro unicamente un string al format*/
			_putchar(format[i]);
			count++;
		}
	}
	va_end(lst);
	return (count);
}