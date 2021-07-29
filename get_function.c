#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * type_of_variable - checks for flags for format specifiers
 *
 * @s: character compared if it is one of the format specifiers
 *
 * Return: function if there is a match / NULL if no match
 */

int (*type_of_variable(const char s))(va_list)
{
	tv tvs[] = {
		{'c', type_char},
		{'s', type_string},
		{'d', type_dec},
		{'i', type_int},
		{'u', type_unsigne},
		{'o', type_octal},
		{'\0', NULL}
	};

	int i = 0;

	while (tvs[i].op)
	{
		if (tvs[i].op == s)
			return (tvs[i].fn);

		i++;
	}
	return (NULL);
}
