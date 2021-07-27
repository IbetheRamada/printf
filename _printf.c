#include "holberton.h"
/**
 * _printf - function that print.
 * @format: Parameter
 * Return: Result de functione
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0;
	va_list arg;

	va_start(arg, format);

	if (format == NULL)
	{
		return (-1);
	}
	for (; format[i] != '%' && format[i] != '\0'; i++, count++)
	{
		_putchar(format[i]);
	}	
	switch (format[i + 1])
	{
                case 'c':
                        i++;
                        count += type_char(arg);
                        i++;
                        break;
                case 's':
                        i++;
                        count += type_string(arg);
                        i++;
                        break;
                case 'd':
                        i++;
                        count += type_dec(arg);
                        i++;
                        break;
                case 'i':
                        i++;
                        count += type_int(arg);
                        i++;
                        break;
                case '%' :
                         i++;
                        count += *type_porcent(arg);
                        i++;
                        break;
        
                default:
                        break;
		i++;
	}
	while (format[i] != '\0')
	{
		_putchar(format[i]);
		count++;
		i++;
	}
	va_end(arg);
	return (count);
}