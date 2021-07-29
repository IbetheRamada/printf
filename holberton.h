#ifndef HOLBERTON_H
#define HOLBERTON_H

/*------------------*/

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct type_v
{
	char op;
	int (*fn)(va_list arguments);
} tv;

/*------------------*/
int _putchar(char c);
int _printf(const char *format, ...);
int _strcmp(char *s1, char *s2);
int (*type_of_variable(const char s))(va_list);
int variable_identifier();
int type_char(va_list c);
int type_string(va_list string);
int type_dec(va_list d);
int type_int(va_list i);

/*------------------*/
#endif /* Holberton_h */
