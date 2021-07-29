#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * type_char - prints character c
 * @ch: Variable
 * Return: Result
 */
int type_char(va_list ch)
{
	char c = va_arg(ch, int);

	_putchar(c);

	return (1);
}

/**
 * type_string - Funtion of string
 * @string: A Pointer
 * Return: Result Parameter
 */
int type_string(va_list string)
{
	char *s = va_arg(string, char *);

	unsigned int i = 0;

	if (s == NULL)
		s = "(null)";

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}

	return (i);
}

/**
 * type_dec - prints decimal
 * @d: variable
 * Return: result decimal.
 */
int type_dec(va_list d)
{
	int i = 0;
	int mod = 1;
	int dec;
	unsigned int dig;

	dec = va_arg(d, int);
	if (dec < 0)
	{
		_putchar('-');
		dig = dec * -1;
		i++;
	}
	else
		dig = dec;
	while (dig / mod > 9)
	{
		mod = mod * 10;
	}
	while (mod > 0)
	{
		_putchar(dig / mod + '0');
		dig = dig % mod;
		mod = mod / 10;
		i++;
	}
	return (i);
}
/**
 * type_int- prints integer
 * @inter: Variable
 * Return: result integer
 */
int type_int(va_list inter)
{
	int in;
	
	in = type_dec(inter);
	return (in);
}

/**
 * type_porcent - prints "%" character
 * @arg: list of arguments, va_list
 *
 * Return: the number of printed chars, int
 */
char *type_porcent(va_list arg)
{
	char *s;

	s = malloc(sizeof(char) * 2);
	if (s == NULL)
		return (NULL);
	s[0] = '%';
	s[1] = '\0';
	(void)arg;
	return (s);
}
