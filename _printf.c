#include "holberton.h"
/**
 * _printf - function that print.
 * @format: Parameter
 * Return: Result de functione
 */
int _printf(const char *format, ...)
{
    int i;
    int count = 0;
	
	va_list x;

    t_v tvs[] = {
		{"c", type_char},
		{"s", type_string},
		{"d", type_dec},
		{"i", type_int},
		{NULL, NULL}

	va_start(x, format);
    for (i = 0; format[i]; i++);

    va_end(x);
    return(count)


}