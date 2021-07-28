#include "holberton.h"
/**
 *_strcmp -Write a function that compares two strings.
 *
 * @s1: Variable
 * @s2: Variable
 * Return: Integer
 */
int _strcmp(char *s1, char *s2)
{

	int x = 0;

	while (s1[x] == s2[x])
	{
		if (s1[x] == '\0' && s2[x] == '\0')
			break;
		x++;
	}
	return (s1[x] - s2[x]);
}