#ifndef HOLBERTON_H
#define HOLBERTON_H

/*------------------*/

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>

/*------------------*/

int _putchar(char c);
int _printf(const char *format, ...);
int variable_identifier();
int type_of_variable();
int type_char(va_list c);
int type_string(va_list string);
int type_dec(va_list d);
int type_int(va_list i);
char *type_porcent(va_list arg);
int *type_rev(va_list rev);


/*------------------*/
#endif /* Holberton_h */
