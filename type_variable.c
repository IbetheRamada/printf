#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * type_char - prints character c
 * @c: Variable
 * Return: Result
 */
int type_char(va_list ch)
{
	char c = va_arg(ch, int );

	_putchar(c);

	return (1);
}

/**
 * type_string - Funtion of string
 * @s: A Pointer
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
 * @n: variable
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
 * @n: Variable
 * Return: result integer
 */
int type_int(va_list inter)
{
	int in;
	printf("llegue");
	in = type_dec(inter);
	return (in);
}

/**
 * type__porcent - prints "%" character
 * @mod: list of arguments, va_list
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
/**
* type_unsigned - a function with a unsigned
*@u: a variable
*
*Return: Always(count) (success)
*/
int type_unsigned(va_list u)
{
	unsigned int a[10];
	unsigned int i, m, n, sum;
	int count;

	n = va_arg(u, unsigned int);
	m = 1000000000; /* (10 ^ 9) */
	a[0] = n / m;
	for (i = 1; i < 10; i++)
	{
		m /= 10;
		a[i] = (n / m) % 10;
	}
	for (i = 0, sum = 0, count = 0; i < 10; i++)
	{
		sum += a[i];
		if (sum || i == 9)
		{
			_putchar('0' + a[i]);
			count++;
		}
	}
	return (count);

}
/**
*type_octal - a function that return a octal
*
*@o: a variable with a octal
*Return: Always(count) (success)
*/
int type_octal(va_list o)
{
	unsigned int a[11];
	unsigned int i, m, n, sum;
	int count;

	n = va_arg(o, unsigned int);
	m = 1073741824; /* (8 ^ 10) */
	a[0] = n / m;
	for (i = 1; i < 11; i++)
	{
		m /= 8;
		a[i] = (n / m) % 8;
	}
	for (i = 0, sum = 0, count = 0; i < 11; i++)
	{
		sum += a[i];
		if (sum || i == 10)
		{
			_putchar('0' + a[i]);
			count++;
		}
	}
	return (count);

}














