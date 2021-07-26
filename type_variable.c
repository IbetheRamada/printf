#include <stdarg.h>
#include "holberton.h"
/**
 * type_char - prints character c
 * @c: Variable
 * Return: Result
 */
int type_char(c)
{
	char c;

	_putchar(c);

	return (1);
}

/**
 * type_string - Funtion of string
 * @s: A Pointer
 * Return: Result Parameter
 */
int type_string(char *s)
{
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
 * @n: variable
 * Return: result decimal.
 */
int type_dec(int n)
{
	int num;
	int last = n % 10;
	int dig;
	int exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			dig = num / exp;
			_putchar(dig + '0');
			num = num - (dig * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}

/**
 * type_int- prints integer
 * @n: Variable
 * Return: result integer
 */
int type_int(int n)
{
	int num;
	int last = n % 10;
	int dig;
	int exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			dig = num / exp;
			_putchar(dig + '0');
			num = num - (dig * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
















